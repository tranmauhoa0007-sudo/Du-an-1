// Học C++ Bài 15.3.cpp : Tính tổng số lẽ /
/*Bài tập C++ 15
viết chương trình tính tổng các số lẽ từ 1 đến n , n nhập từ bàn phím .
nhập n =7 , bỏ qua không cộng với số 3 => in ra kết quả màn hình .
(gợi ý : 1 + 5 + 7 = 13) 
thử break khi vòng lặp chạy đến giá trị bằng 7.*/

#include <iostream>
using namespace std;

int main()
{
	int n, tổng = 0;
	cout << "Mời bạn nhập vào số n :";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i == 3)
		{
			continue;
		}
		else if (i== 7)
		{
			break;
		}
		else if (i % 2 != 0)
		{
			tổng += i;
			cout << "in biến i :" << i << endl;
			cout << "in biến tổng :" << tổng << endl;
		}
		
	}
	cout << "Tổng các số lẽ từ 1 đến " << n << " (bỏ qua số 3) là: " << tổng << endl;

	return 0;
}


