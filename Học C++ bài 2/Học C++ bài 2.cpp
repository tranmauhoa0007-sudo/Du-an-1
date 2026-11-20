// Học C++ bài 2.cpp : Nhập xuất dữ liệu c++

#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <string>

using namespace std;

int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);

	// xuất dữ liệu ra màn hình 
	wcout << L"Nhập tên của bạn: ";
	wstring ten;
	wcin >> ten;
	wcout << L"Xin chào, " << ten << L"!" << endl;
	// Nhập dữ liệu từ bạn phím
	double toán, văn, anh;
	// Điểm toán
	wcout << L"Nhập điểm toán: "<< endl;
	wcin >> toán;
	// Điểm văn  
	wcout << L"Nhập điểm văn: "<<endl;
	wcin >> văn;
	//Điểm anh	
	wcout << L"Nhập điểm anh: "<<endl;
	wcin >> anh;
	 // xuất dữ liệu ra màn hình
	wcout << L"Điểm toán: " << toán << endl;
	wcout << L"Điểm văn: " << văn << endl;
	wcout << L"Điểm anh: " << anh << endl;

	// nhạp dữ liệu từ bàn phím 2
	wstring ten1;
	double toán1, văn1, anh1;
	wcout << L"Nhập tên của bạn: ";
	wcin >>	 ten1;
	// xuấtmàn hình xin chào người nhập
	wcout << L"Xin chào, " << ten1 << L"! Chúc bạn một ngày mới tốt lành và gặp nhiều suôn sẻ trong công việc!" << endl;
	wcout << L"Mời bạn nhập vào điểm số các môn thi của mình :" << endl;
	// Điểm toán 
	wcout << L"Nhập điểm toán của bạn: " <<endl;
	wcin >> toán1;
	// Điểm văn
	wcout << L"Nhập điểm văn của bạn: " <<endl;
	wcin >> văn1;
	// Điểm anh
	wcout << L"Nhập điểm anh của bạn: " <<endl;


	wcin >> anh1;
	// tính điểm trung bình để xét tốt nghiệp
	double dtb = (toán1 + văn1 + anh1) / 3;
	wcout << L"Điểm trung bình của bạn là: " << dtb << endl;

	if (dtb >= 5)
	{
		wcout << L"Bạn đã đạt yêu cầu tốt nghiệp." << endl;
	}
	else
	{
		wcout << L"Bạn chưa đạt yêu cầu tốt nghiệp." << endl;
	}

	return 0;
}

