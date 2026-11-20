// Học C++ bài 8.3.cpp : Tính điểm trung bình làm tròn số 
/*
    Bài tập c++ 04 
        viết chương trình nhập điểm 3 môn toán ,văn ,anh của một học sinh 
        Tính điểm trung bình và xuất kết quả làm tròn lấy 2 chữ số lẻ phần thập phân.
*/

#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <iomanip>
using namespace std;

int main()
{
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);

    float toán, văn, anh, Điểm_tb;
    wcout << L"Mời bạn nhập vào điểm toán :";
    wcin >> toán;
    wcout << L"Mời bạn nhập vào điểm văn :";
    wcin >> văn;
    wcout << L"Mời bạn nhập vào điểm anh:";
    wcin >> anh;

    // tính điểm trung bình cộng của 3 môn này
    Điểm_tb = (toán + văn + anh) / 3;
    wcout << L"Điểm trung bình 3 môn là :" << Điểm_tb << endl;
    wcout << L"Điểm trung bình làm tròn 2 số thập phần là :" <<  setprecision(3) << Điểm_tb << endl;



    return 0;
}

