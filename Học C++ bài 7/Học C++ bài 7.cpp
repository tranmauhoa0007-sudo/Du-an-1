// Học C++ bài 7.cpp : toán tử tử gán và các pép so sánh trong c++ 


#include <iostream>
#include <io.h>
#include <fcntl.h>  
using namespace std;

int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);


	// Toán tử gán 
	int x = 8;
	x += 5; // x=x+5
	wcout << L"Gía trị của x sau khi gán là :" << x << endl;

	// Gán trừ bằng
	int y = 4;
	y -= 2; // y=y-2
	wcout << L"Gía trị của y sau khi gán là ;" << y << endl;

	// Gán nhân bằng 
	int z = 3;
	z *= 4; // z=z*4
	wcout << L"Gía trị của z sau khi gán là : " << z << endl;

	// Gán chia bằng
	double w = 10; 
	w /= 3; //w=w/3
	wcout << L"Gía trị của w sau khi gán là : " << w << endl;

	// Gán chia  lấy đư bằng
	int v = 14;
	v %= 5; // v=v%5
	wcout << L"Gía trị của v sau khi gán là : " << v << endl;


	// Các phép so sánh trong c++
	int a = 5;
	int b = 1;

	// 1.So sánh bằng
	wcout << L"So sánh bằng nếu Đúng là 1 ,nếu sai thì 0 : " << (a == b) << endl;

	// 2.So sánh khác
	wcout << L"So sánh khác nếu Đúng là 1 ,nếu sai thì 0 :" << (a != b) << endl;
	
	// 3.So sánh lớn hơn
	wcout << L"So sánh lớn hơn nếu Đúng là 1 ,nếu sai thì 0 :" << (a > b) << endl;

	// 4.So sánh nhỏ hơn
	wcout << L"So sánh nhỏ hơn nếu Đúng là 1 ,nếu sai thì 0 :" << (a < b) << endl;

	// 5.So sánh lớn hơn hoặc bằng
	wcout << L"So sánh lớn hơn hoặc bằng nếu Đúng là 1 ,nếu sai thì 0 :" << (a >= b) << endl;

	// 6.So sánh nhỏ hơn hoặc bằng
	wcout << L"So sánh nhỏ hơn hoặc bằng nếu Đúng là 1 ,nếu sai thì 0 :" << (a <= b) << endl;

























    return 0;
}

