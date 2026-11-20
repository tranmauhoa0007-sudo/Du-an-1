// HỌC C++ BÀI 12.cpp : Vòng lặp WHILE

#include <iostream>
using namespace std;

int main()
{
	int a;
	
	cout << "Mời bạn nhập vào số a bất kỳ :";
	cin >> a;
	int x = 0;
	int tổng = 0;
	while (x < a) {
		x++;
		if (x % 2 ==0)
		{
			tổng = tổng + x;

			cout << " in biến x :" << x << endl;
			cout << " in biến tổng :" << tổng << endl;
			
		}
		
	}
	cout << "in biến tổng số lẽ :" << tổng << endl;

	// tính tổng số lẽ .
	int y = 0;
	int tổng_1 = 0;
	while (y <= a) {
		++y;
		if (y % 2 != 0)
		{
			

			tổng_1 = tổng_1 + y;
			cout << "in biến y :" << y << endl;
			cout << "in biến tổng_1 :" << tổng_1 << endl;
		}
	}
	cout << "in biến tổng số lẽ :" << tổng_1 << endl;





}