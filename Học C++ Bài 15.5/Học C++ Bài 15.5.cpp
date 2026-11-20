// Học C++ Bài 15.5.cpp : tính tổng giai thừa 
/*bài tập c++ 17.
viết chương trình tính tổng:
s = 1! + 2! + 3! + ... + n!*/

#include <iostream>
using namespace std;

int main()
{
	int n, tổng = 0;
	int gt = 1;
	cout << "Mời bạn nhập vào số n :";
	cin >> n;
	while (n < 0)
	{
		cout << "bạn đã nhập sai. Mời bạn nhập vào số n :";
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
	{
		gt = gt * i;
		cout << "in biến i :" << i << endl;	
		cout << "in biến gt :" << gt << endl;
		// tính tổng giai thừa
		tổng = tổng + gt;
	}
	cout << "tổng giai thừa là: " << tổng << endl;
}

