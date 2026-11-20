// Học C++ bài 4.cpp : Hằng số và biểu thức trong C++


#include <iostream>


using namespace std;

int main()
{
	
	

	cout << "TRẦN MẬU HÀO HỌC LẬP TRÌNH CƠ BẢN CÓ LÊN BẠN HIỀN NHỈ: ";

	// Khai báo hằng số 
	const double PI = 3.14159; // Hằng số PI
	const int MAX = 100; // Hằng số MAX
	const int Văn = 9; // Hằng số Văm

	cout << "\nHằng số PI: " << PI << endl;
	cout << "\nHằng số MAX: " << MAX << endl;
	cout <<  "\nHằng số Văn: " << Văn	 << endl;
	// Type pronotion
	int a = 5;
	int ab = 5;
	// xuất tổng a+ab ra màn hình
	wcout << L"\nTổng a + ab = " << a + ab << endl;
	// khai báo biền kq để nhậm kết quả cảu biểu thức a + ab
	int kq = a + ab;
	cout <<  "\nKết quả biểu thức a + ab mà kq nhận được là = " << kq << endl;
	cout <<  "kết quả là :" << kq + MAX << endl;











	return 0;
}

