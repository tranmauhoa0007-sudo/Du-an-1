// Học C++ bài 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <cstdlib>
#include <windows.h>
#include <wlanapi.h>

using namespace std;

int main()
{

	   




    
        // Thay đổi encoding sang UTF-8 để hiển thị tên WiFi có dấu (nếu có) không bị lỗi font
        system("chcp 65001 > nul");

        wcout<< "==================================================\n";
        wcout<< "   DANH SÁCH WIFI VÀ MẬT KHẨU ĐÃ LƯU TRÊN MÁY\n";
        wcout<< "==================================================\n\n";

        // Lệnh này sẽ hiển thị tất cả các Profile WiFi kèm mật khẩu trực tiếp trên CMD
        // Bằng cách sử dụng vòng lặp trong command prompt để duyệt qua từng tên WiFi
        system("for /f \"tokens=2 delims=:\" %a in ('netsh wlan show profiles ^| findstr \"All User Profile\"') do @cmd /c \"echo WiFi Name:%a & netsh wlan show profiles name=%a key=clear | findstr \"Key Content / Nội dung Khóa\" & echo ---------------------------------\"");

        wcout<< "\nNhấn Enter để thoát...";
        std::cin.get();




        // Cần link với thư viện wlanapi.lib
           
            #pragma comment(lib, "wlanapi.lib")

        
            HANDLE hClient = NULL;
            DWORD dwMaxClient = 2;
            DWORD dwCurrentVersion = 0;

            // 1. Khởi tạo kết nối với dịch vụ WiFi của Windows
            if (WlanOpenHandle(dwMaxClient, NULL, &dwCurrentVersion, &hClient) != ERROR_SUCCESS) {
                wcout<< "Không thể mở Wlan Handle\n";
                return 1;
            }

            PWLAN_INTERFACE_INFO_LIST pIfList = NULL;
            // 2. Lấy danh sách các card WiFi trên máy
            if (WlanEnumInterfaces(hClient, NULL, &pIfList) == ERROR_SUCCESS) {
                for (DWORD i = 0; i < pIfList->dwNumberOfItems; i++) {
                    WLAN_INTERFACE_INFO IfInfo = pIfList->InterfaceInfo[i];

                    PWLAN_AVAILABLE_NETWORK_LIST pBssList = NULL;
                    // 3. Quét các mạng WiFi có xung quanh card mạng này
                    if (WlanGetAvailableNetworkList(hClient, &IfInfo.InterfaceGuid, 0, NULL, &pBssList) == ERROR_SUCCESS) {
                        for (DWORD j = 0; j < pBssList->dwNumberOfItems; j++) {
                            WLAN_AVAILABLE_NETWORK network = pBssList->Network[j];
                            // Hiển thị tên WiFi (SSID)
                            wcout<< "WiFi tìm thấy: " << network.dot11Ssid.ucSSID << "\n";
                            wcout<< "Chế độ bảo mật: " << network.dot11DefaultCipherAlgorithm << "\n";
                            wcout<< "---------------------------------\n";
                        }
                         WlanFreeMemory(pBssList);
                    }
                }
                WlanFreeMemory(pIfList);
            }
            WlanCloseHandle(hClient, NULL);
            return 0;
        }

























        return 0;



}
    







