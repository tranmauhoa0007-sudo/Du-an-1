// Học C++ Bài 15-2.cpp : Tính tổng số chẵn .
/*bài tập :C++ 15 .Viết chương trình nhập vào số nguyên n từ bàn phím .
Nếu a là số chẵn, tính tổng từ 0 đến a
Nếu a là số lẻ , in ra màn hình dòng.
" tôi không tính tổng số lẻ .bye bye.*/

#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << " Mời bạn nhập vào số nguyên dương a: ";
	cin >> a;
	 // tính tông số chẵn dùng vòng lặp for.
	int tổng = 0;
	int tổng_1 = 0;
	for (int i = 0; i <= a; i++)
	{
		if (i % 2 == 0)
		{
			tổng = tổng + i;
			cout << "in biến i :" << i << endl;
			cout << "in biến tổng :" << tổng << endl;
		}
		else if (i % 2 != 0)
		{
			cout << "số lẻ: " << i << endl;
			cout << "tôi không tính tổng số lẻ .bye bye." << endl;
		}
	}
	cout << "Tổng các số chẵn từ 0 đến " << a << " là: " << tổng << endl;
}

