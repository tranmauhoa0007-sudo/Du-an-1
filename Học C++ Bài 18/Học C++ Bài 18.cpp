// Học C++ Bài 18.cpp : Truyền tham trị cho hàm
// truyền tham trị là không thay đổi giá trị của biến sau khi gọi hàm

#include <iostream>
using namespace std;

// hàm ví dụ về truyền tham trị
void thamtri(int a)
{
	a = 100;
	cout << "Giá trị của a trong hàm thamtri: " << a << endl;

}
// hàm ví dụ về truyền tham chiếu
void thamchieu(int  &a)
{
	a = 100;
	cout << "Giá trị của a trong hàm thamchieu: " << a << endl;

}


int main()
{
    // tes hàm tham trị
	//int a = 1;
	//cout << "Giá trị của a trước khi gọi hàm thamtri: " << a << endl;
	// gọi hàm thamtri với biến a
	//thamtri(a);
	//in ra giá trị của a sau khi gọi hàm thamtri
	//cout << "Giá trị của a sau khi gọi hàm thamtri: " << a << endl;

	//2. test hàm tham chiếu
	int a = 1;
	cout << "Giá trị của a trước khi gọi hàm tham chiếu: " << a << endl;
	// gọi hàm thamchieu với biến a
	thamchieu(a);
	// in ra giá trị của a sau khi gọi hàm thamchieu
	cout << "Giá trị của a sau khi gọi hàm tham chiếu: " << a << endl;







}


