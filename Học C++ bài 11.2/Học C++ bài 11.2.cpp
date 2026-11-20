// Học C++ bài 11.2.cpp : áp dụng switch -case để giải bài .

#include <iostream>
#include <windows.h>
#include <cstring>
#include <string>
#include <limits>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    /*
        Bài tập c++ 12 : áp dụng switch -case : viết chương trình khung tìm kiếm .cho người dùng nhập vào khung lựa chọn sau :
            1. tìm theo tên.
            2. tìm theo tác giả .
            3. tìm theo nhà xuất bản .
            4. tìm theo tiêu đề .
            thoát nếu phím bấm không hợp lệ .
    */
   
    


    int choice;
    cout << "Mời bạn bấm số để chọn :" << endl;
    cout << "phím 1 : tìm theo tên ." << endl;
    cout << "phím 2 : tìm theo tác giả." << endl;
    cout << "phím 3 : tìm theo nhà xuất bản." << endl;
    cout << "phím 4 : tìm theo tiêu đề ." << endl;
    // đưa dữ liệu người dùng nhập vào biến choice.
    cin >> choice;
    string tên, tác_giả, nha_xuất_bản, tiêu_đề;
    // dùng hàm switch-case để xuất ra màn hình theo yêu cầu.
    switch (choice) {
    case 1:
        cout << " tìm theo tên ." << endl;
        cout << "Mời bạn nhập tên " << endl;
        getline(cin, tên);
        cout << "tên " << tên << endl;
       
        break;
    case 2:
        cout << " tìm theo tác giả ." << endl;
        break;
    case 3 :
        cout << " tìm theo nhà xuất bản ." << endl;
        break;
    case 4:
        cout << " tìm theo tiêu đề ." << endl;
        break;
    default :
        cout << "bạn nhập tào lao .nhập lại mày ." << endl;
        break;
    }
    
   
    

    

    

















    
    return 0;
}

