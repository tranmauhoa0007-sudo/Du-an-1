// Học C++ BÀI 5.cpp : Học ép kiểu dữ liệu trong C++


#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;


int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);

	//1. ép kiểu dữ liệu kiểu rộng (ép từ kiểu bé đến lớn ) không lo mất dữ liệu
	short a = 10;
	// xuất ra giá trị của biến a
	wcout << L"Giá trị của biến a: " << a << endl;

	// Khai báo biến b kiểu int và ép kiểu từ a sang b
	int b;
	// kiểu ép tắt
	b = a;
	// kiểu ép tường minh 
	b=(int)a;
	wcout << L"Giá trị của biến b: " << b << endl;
	wcout << L"Kiểu dữ liệu của biến b là :"<<typeid(b).name() << endl;
	wcout << L"Kiểu dữ liệu của biến a là :" << typeid(a).name() << endl;
	wcout << L"Gioi hạn kiểu dữ liệu LỚN NHẤT của int: " << INT_MAX << endl;
	wcout << L"Gioi hạn kiểu dữ liệu NHỎ NHẤT của int: " << INT_MIN << endl;

	// ép kiểu dữ liệu kiểu hẹp (ép từ kiểu lớn đến bé ) có thể mất dữ liệu
	float c = 10.5f;
	int d;
	// kiểu ép tắt
	d = c;
	// kiểu ép tường minh
	d = (int)c;
	wcout << L"Giá trị của biến d: " << d << endl;
	wcout << L"Kiểu dữ liệu của biến d là :" << typeid(d).name() << endl;
	wcout << L"Kiểu dữ liệu của biến c là :" << typeid(c).name() << endl;
	wcout << L"Gioi hạn kiểu dữ liệu LỚN NHẤT của float: " << FLT_MAX << endl;
	wcout << L"Gioi hạn kiểu dữ liệu NHỎ NHẤT của float: " << FLT_MIN << endl;	






	return 0;
}


