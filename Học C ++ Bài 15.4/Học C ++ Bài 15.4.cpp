// Học C ++ Bài 15.4.cpp : Tìm số chia hết cho từ 10 đến 50.
/*Bài tập C++ 16
viết chương trình tìm các số chia hết cho 3 từ 10 đến 50.
*/

#include <iostream>
using namespace std;

int main()
{
	int n{};
	cout << "Mời bạn nhập vào số n (10 <= n <= 50): ";
	cin >> n;

	while (n>50 || n<10	)
	{
		cout << "bạn đã nhập sai. Mời bạn nhập vào số n (10 <= n <= 50): ";
		cin >> n;
		
	}
	for (int i = 10; i <= n; i++)
	{
		
		if (i % 3 == 0)
		{
			cout << "số chia hết cho 3: " << i << endl;
		}
	}
	cout << endl;

	return 0;
}


