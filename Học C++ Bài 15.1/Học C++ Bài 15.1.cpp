// Học C++ Bài 15.1.cpp : tính giai thừa của một số nguyên dương n nhập từ bàn phím
/*bài tập :C++ 13 .Viết chương trình nhập vào số nguyên n từ bàn phím .
In ra kết qủa n!
        Dùng vòng lặp for
        dùng vòng lặp while .
 ví dụ : 5! = 5*4*3*2*1.
 
 Ký hiệu  :! là giai thừa của một số nguyên dương n.*/


#include <iostream>
using namespace std;    

int main()
{
    int n, gt = 1;
    cout << " Mời bạn nhập vào số nguyên dương n:";
    cin >> n;
    // Cách 1 : dùng vòng lặp For.
	for (int i = 1;i <= n; i++)
	{
		cout << "i = " << i << endl;
		gt = gt * i;
		cout << "Giai thừa của " << i << "  là " << gt << endl;
	}

    cout << "Giai thừa của " << n << " là " << gt << endl;

    // Cách 2 : dùng vòng lặp While.
    int i = 1, gt1 = 1;
	while (i <= n)
	{
		i++;
		cout << "i = " << i << endl;
		gt1 = gt1 * i;
		cout << "Giai thừa của " << i << "  là " << gt1 << endl;
	
	}

}


