// Học C++ bài 9.5.cpp : Giair phương trình bậc 2.


#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <cmath>
using namespace std;


int main()
{
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);

   /*
		Bài tập c++09  Viết phương trình bậc 2 :
                ax^2 + bx + c = 0 (a ≠ 0) và tính nghiệm của phương trình.
                    1. case 1 : a=1,b=2,c=-3
					pt có 2 nghiệm phân biêt :x1=1,x2=-3
                    2.case 2 :a=1,b=2,c=1
                    Pt có ngiệm kép x1=x2=-1
                    3.case 3 : a=1,b=1,c=1
                    Pt vô nghiệm.
    */

	double a, b, c, delta, x1, x2;
    // cho người dùng nhập vào các hệ số a,b,c 
    wcout << L" Nhập vào hệ số a :";
    wcin >> a;
    wcout << L"Nhập vào hệ số b :";
    wcin >> b;
    wcout << L"Nhập vào hệ số c :";
    wcin >> c;
    // tính delta 
    delta = pow(b,2) - (4 * a * c);

    if (delta < 0)
    {
        wcout << L" Phương trình vô nghiệm :" << endl;

    }
    else if (delta == 0)
    {
        x1 = (-b) / (2 * a);
        wcout << L" Phương trình có nghiệm kép  x1 = x2  = : "   << x1 << endl;
    }
    else if (delta > 0)
    {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
        wcout << L" Phương trình có 2 nghiệm phân biệt : " << endl;
        wcout << L" x1=  " << x1 << endl;
        wcout << L" x2=  " << x2 << endl;
    }
    else
    {
        wcout << L"Nghiệm tào lao .";
    }
}


