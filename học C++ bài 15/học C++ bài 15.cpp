// học C++ bài 15.cpp : break,countinue,return


#include <iostream>
using namespace std;  

int main()
{
	// Continue : bỏ qua các câu lệnh phía sau và quay lại vòng lặp tiếp theo.
	int tổng = 0;
	for (int i = 0; i <= 5; i++)
	{
		if (i == 2)
		{
			continue;																// bỏ qua 2 và tiếp tục chạy vòng lặp tiếp theo.
		}
		else
		{
			cout << "i =" << i << endl;										// in ra các giá trị của i từ 0 đến 5 nhưng bỏ qua 2.
			tổng = tổng + i;
			cout << "in ra tổng :" << tổng << endl;					// in ra tổng các số từ 0 đến 5 nhưng bỏ qua 2 vì dùng continue ở trên 
		}

	}
	cout << "tổng các số từ 0 đến 5 là :" << tổng << endl;

	// Break : ngắt giá trị .
	int n = 0;
	while (n < 100) 
	{
		    cout << "N trong vòng lặp :" << n << endl;
			n++;																		// Tăng biến n lên 1 khi lặp .
		
			if (n == 10)
			{
				break;																// khi n = 10 thì break sẽ ngắt vòng lặp while và thoát ra ngoài.
			}
	}
	cout << " in ra giá trị n cuối cùng :" << n << endl;			// in ra giá trị cuối cùng của n là 100 vì break không được sử dụng ở đây.
}