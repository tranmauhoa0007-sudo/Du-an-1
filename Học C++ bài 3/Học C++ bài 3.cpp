// Học C++ bài 3.cpp : Học kiểu dữ liệu 


#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <climits>
using namespace std;

int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);

	//xuất giới hạn kiểu dữ liệu ra màn hình
	wcout << L"max của kiểu int là :" << INT16_MAX << endl;
	wcout << L"min của kiểu int là :" << INT16_MIN << endl;
	// Xuất giới hạn kiểu dữ liệu short
	wcout << L"max của kiểu short là :" << SHRT_MAX << endl;
	wcout << L"min của kiểu short là :" << SHRT_MIN << endl;
	//KHAI BÁO BIẾN VÀ KHỞI TẠO BIẾN 
		//1. KHAI BÁO BIẾN 
			int toán;
			float điêm_toán;
			double tiền_lương;
	//Khai báo nhiều biến có cùng một kiểu dữ liệu
			int a, b, c, d;

	// khởi tạo biến 
			bool check = true;
			char ký_tự = 'a';
			int Cân_nặng = 45;
			float Điểm_văn = 9.6;
			float Điểm_sinh = 9.6;
	// Xuất giá trị của biến ra màn hình
			wcout << L"Gía trị của biến cân_nặng là :" << Cân_nặng << endl;
	// kiểm tra kiểu dữ liệu của biến 
			wcout << L"kiểu dữ liệu của điểm văn là :" << typeid(Điểm_văn).name() << endl;
	
			








	return 0;

}

