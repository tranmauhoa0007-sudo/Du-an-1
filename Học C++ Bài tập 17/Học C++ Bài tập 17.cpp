// Học C++ Bài tập 17.cpp : hàm trong C++ là gì? Tại sao phải sử dụng hàm trong C++? 

#include <iostream>
using namespace std;

int cộng(int a, int b)
{
	return a + b;
}
// hàm thủ tục 
void XinChao(string giớitính)		
		{
				cout << "Xin chào, " << giớitính << "!" << endl;
		}
int main()
{
	int kq = cộng(5, 10);
	int kq2 = cộng(20, 30);
	cout << "Kết quả là: " << kq << endl;
	cout << "Kết quả là: " << kq2 << endl;
	return 0;
}


