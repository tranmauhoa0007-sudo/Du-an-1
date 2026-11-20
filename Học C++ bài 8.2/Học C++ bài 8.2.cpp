// Học C++ bài 8.2.cpp : Tính chu vi,diện tích hình chữ nhật
/*
bài tập c++ .03 : tính chu vi,diện tích hình chữ nhật
1. viết chương trình nhập vào 2 số thực dương a,b từ bàn phím 
    a,b là chiều rộng và chiều dài hình chữ nhật.
2.in ra màn hình chu vi và diện tích của hình chữ nhật đó .
    Gợi ý :
            diện tích s = a * b
            chu vi    p = (a +b) *2

*/

#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;


int main()
{
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    
    double a, b;
    wcout << L"Nhập vào chiều dài hình chữ nhật a :" << endl;
    wcin >> a;
    wcout << L"Nhập vào chiều rộng hình chữ nhật b :" << endl;
    wcin >> b;
    // Tính chu vi hình chữ nhật
    float Chu_vi = (a + b) * 2;
    wcout << L"Chu vi hình chữ nhật là :" << Chu_vi << endl;
    float Diện_tích = a * b;
    wcout << L"Diện tích hình chữ nhật là :" << Diện_tích << endl;









    return 0;
}

