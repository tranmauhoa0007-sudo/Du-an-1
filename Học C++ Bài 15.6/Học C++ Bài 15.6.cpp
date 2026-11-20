// Học C++ Bài 15.6.cpp : Tìm số hoàn hảo trong khoảng từ 1 đến 1000

#include <iostream>
using namespace std;

int main()
{
	// kiểm tra số hoàn hảo trong khoảng từ 1 đến 1000
	int n;
	cout << "Nhập số n trong khoảng từ 1 đến 1000: ";
	cin >> n;
	int sum = 0;
	while (n < 1 || n > 1000)                                                                         // kiểm tra điều kiện nhập n
	{
		cout << "Số n không hợp lệ. Vui lòng nhập lại: ";
		cin >> n;
	}
	for(int i = 1; i < n; i++)
	{
		// kiểm tra số hoàn hảo mà ngươi dùng nhập vào có phải là số hoàn hảo hay không.
		if (n % i == 0)
		{
			sum +=i;
			cout << "Các ước của " << n << " là: " << i << endl;		// in ra các ước của số n mà người dùng nhập vào.
			

		}
		
	}
	cout << "Tổng các ước của " << n << " là: " << sum << endl;		// in ra tổng các ước của số n mà người dùng nhập vào.
	if (sum == n)
	{
		cout << n << " : là số hoàn hảo" << endl;		// in ra số hoàn hảo mà người dùng nhập vào.
	}
	else
	{
		cout << n << " : không phải là số hoàn hảo" << endl;
	}


	// kiểm tra các số hoàn hảo trong khoảng từ 1 đến 1000

	for (int x = 1; x <= 1000; x++)
	{
		// kiểm tra từng giá trị xem n có phải là số hoàn hảo không nhỉ
		int sum = 0;
		// kiểm tra các ước của n
		for (int i = 1; i < x	; i++)
		{
			if (x % i == 0)
			{
				sum += i;
			}
		}
		if (sum == x)
		{
			cout << x << " : là số hoàn hảo" << endl;
		}
	}
}

