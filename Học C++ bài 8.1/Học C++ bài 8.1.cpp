// Học C++ bài 8.1.cpp : tính chu vi, diện tích hình tròn
/*bài tập C02:
viết chương trình nhập từ bàn phím bán kính r của đường tròn ,in ra kết quả 
a. chu vi =
b. diện tích =?
Gợi ý :
        chu vi = 2 *pi*r
        Diện tích = pi *r*r
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <cmath>

using namespace std;


int main()
{
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    
    double r;
    wcout << L" mời bạn nhập vào bán kính r :" << endl;
    wcin >> r;
    // Tính chu vi đường tròn 
    float chuvi = 2 * M_PI * r;
    wcout << L" chu vi hình tròn là : " << chuvi << endl;
    // Tính diện tích hình tròn
    float Diện_Tích = M_PI * r * r;
    float Diện_Tích1 = M_PI * pow(r,2);// tính diện tích kết hợp dùng hàm lũy thừa pow 
    wcout << L"Diện tích hình tròn là :" << Diện_Tích << L" Mét vuông" << endl;
    wcout << L"Diện tích hình tròn là :" << Diện_Tích1 << L" Mét vuông " << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}


