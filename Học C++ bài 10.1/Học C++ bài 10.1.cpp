// Học C++ bài 10.1.cpp : Lập trình toán 3 ngôi


#include <iostream>
using namespace std;

int main()
{
   
   

    /*
        Viết chương trình nhập vào điểm trung bình  và kết quả xếp loại của học sinh theo chuẩn sau :
        (dùng toán tử 3 ngôi)
                Gioi : Nếu điểm  >= 8.
                Khá : Nếu  8 > điểm >= 6.5.
                Trung bình : Nếu 6.5 > điểm >= 5.
                Yếu : Nếu điểm > 5.
    Biến = biểu_thức_1 ? Biểu_thức_2 : (biểu_thức_1'? biểu_thức_2' : biểu_thức_3)
   */
    float anh, văn, toán;
    string tên;

    cout << "Mời bạn nhập vào Họ và Tên :" << endl;
    cin >>  tên;
    cout << "Mời bạn nhập vào điểm Văn :" << endl;
    cin >> văn;
    cout << "Mời bạn nhập vào điểm Toán :" << endl;
    cin >> toán;
    cout << "Mời bạn nhập vào điểm Anh :" << endl;
    cin >> anh;
    // Tính điểm trung bình 3 môn của học sinh 
    double ĐTB = (anh + văn + toán) / 3;
    // xết kết quả xếp loại học sinh dựa vào điểm trung bình 3 môn trên.
    string kết_quả = (ĐTB >= 8) ? "Giỏi" : ((ĐTB < 8 && ĐTB >= 6.5) ? "Khá" : ((ĐTB > 6.5 && ĐTB >= 5) ? "Trung bình" : "Yếu"));
    cout << " Điểm trung bình của em " << tên << " là : " << ĐTB << endl;
    cout << " Kết quả xếp loại của em " << tên << " là : " << kết_quả << endl;
}

