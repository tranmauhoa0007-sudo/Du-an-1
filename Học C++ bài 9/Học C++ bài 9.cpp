// Học C++ bài 9.cpp : Tìm hiểu câu lệnh if -else if - else if - else


#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace  std;


int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);

	float dtb;
	wcout << L"Mời bạn nhập điểm trung bình :";
	wcin >> dtb;
	// kiểm tra điều kiện 
	if (dtb >= 5)
	{
		wcout << L" Bạn đã đậu tốt nghiệp lớp 9" << endl;
	}
	else
	{
		wcout << L"Bạn đã rớt tốt nghiệp lớp 9.bạn không còn cơ hội thi lại .xin chia buồn " << endl;
	}

	//câu lệnh if - else if - else
	/*
		- Nhập điểm 3 môn toán ,văn ,anh của học sinh .
		- Tính điểm trng bình 3 môn toán văn anh.
		- in ra kết quả xếp loại của học sinh theo bảng sau :
			giỏi : 8.0 <= dtb <= 10.0
			khá : 6.5 <= dtb < 8.0
			Trung bình : 5.0 <= dtb < 6.5
			yếu : dtb < 5.0
		- xét thưởng tiền học bổng theo kết quả học tập như sau :
				giỏi : 1.000.000 vnd.
				khá : 500.000 vnd.
				Trung bình : 200.000 vnd.
		
	*/
	
	float toán, văn, anh;
	wcout << L"Mời bạn nhập điểm môn toán :";
	wcin >> toán;
	wcout << L"Mời nhập điểm môn văn :";
	wcin >> văn;
	wcout << L"Mời nhập điểm môn anh :";
	wcin >> anh;
	
	// tính điểm trung bình 3 môn toán ,văn ,anh
	double Điểm_dtb = (toán + văn + anh) / 3;
	
	// xếp loại học sinh theo điểm trung bình
	if (Điểm_dtb >= 8.0 && Điểm_dtb <= 10.0)
	{
		wcout << L"Bạn xếp loại giỏi" << endl;
		wcout << L"Bạn được thưởng 100.000 vnd từ bạn sở giáo dục" << endl;
	}
	else if (Điểm_dtb >= 6.5 && Điểm_dtb < 8.0)
	{
		wcout << L"Bạn xếp loại khá" << endl;
		wcout << L"Bạn được thưởng 500.000 vnd từ bạn sở giáo dục" << endl;
	}
	else if (Điểm_dtb <= 5.0 && Điểm_dtb < 6.5)
	{
		wcout << L"Bạn xếp loại trung bình" << endl;
		wcout << L"Bạn được thưởng 200.000 vnd từ sở giáo dục " << endl;
	}
	else
	{
		wcout << L"Bạn xếp loại yếu " << endl;
		wcout << L"Bạn không được thưởng tiền học bổng từ sở giáo dục .và cố gáng phấn đấu học tập hơn ." << endl;
	}
		/* 
				bai tập c++ .05.
				Tìm x,y khi biết tổng và hiệu của chúng .
				 Bài 1 :Tổng =14 ,hiệu =4  tìm x,y
				 Bài 2 :Tổng =8 ,hiệu =5  tìm x,y
				 Gợi ý :
 							x+y =14
							x-y =4
		*/
		// tìm x,y biết tổng =14,hiệu =4   và tổng =8,hiệu =5.

	float  tổng, hiệu;
	wcout << L"Mời nhập tổng của 2 số chưa biết :";
	wcin >> tổng;
	wcout << L"Mời nhập hiệu của 2 số chưa biết :";
	wcin >> hiệu;
	// Giai phương trình 2 ẩn số 
	float x = (tổng + hiệu) / 2;
	float y = (tổng - hiệu) / 2;
	// xuất kết quả x,y ra màn hình 
	wcout << L" Số x = " << x << endl;
	wcout << L" Số y = " << y << endl;

	/*
		Bài tập c++ .07.
		Viết chương trình nhập vào 1 năm dương lịch .kiểm tra xem năm đó có phải là năm nhuận hay không .
		Gợi ý :
			- Năm nhuận là năm chia hết cho 4 nhưng không chia hết cho 100 hoặc năm đó chia hết cho 400 .	
	*/

	// nhập vào 1 năm dương lịch bất kỳ.
	int năm;
	wcout << L" Mời bạn nhập vào 1 năm dương lịch bất kỳ :";
	wcin >> năm;
	// kiểm tra xem năm đó có phải là năm nhuận hay không .

	if (((năm % 4 == 0) && (năm % 100 != 0)) || (năm % 400 == 0))
	{
		wcout << L" Năm " << năm << L" là năm nhuận " << endl;	
	}
	else
	
	{
		wcout << L" Năm " << năm << L" không phải là năm nhuận " << endl;
	}

					
	    
	


























	return 0;
}


