                                                                    // Học C++ Bài 17.2.cpp :hàm trong C++
/* Viết chương trình nhập vào 2 số nguyên từ bàn phím :
Nhập vào ký tự +,-,*,/  
Dùng function :
1 .nếu nhập : +tính tổng
2 .nếu nhập : -tính hiệu
3 .nếu nhập : *tính tích
4 .nếu nhập : /tính thương.
tất cả điều in ra màn hình .*/

#include <iostream>
using namespace std;

void tính(int a, int b, char c)
{
	switch (c)
	{
	case '+':
		cout << "Tổng: " << a + b << endl;
		break;
	case '-':
		cout << "Hiệu: " << a - b << endl;
		break;
	case '*':
		cout << "Tích: " << a * b << endl;
		break;
	case '/':
		if (b != 0)
			cout << "Thương: " << a / b << endl;
		else
			cout << "Lỗi: Không thể chia cho 0!" << endl;
		break;
	default:
		cout << "Ký tự không hợp lệ!" << endl;
	}
}

int main()
{
	int a, b;
	char c;
	cout << "Nhập vào hai số nguyên: ";
	cin >> a >> b;
	cout << "Nhập vào ký tự (+, -, *, /): ";    // chọn phép tính để tính ra kết quả.
	cin >> c;

	// gọi hàm tính để thực hiện phép tính dựa trên ký tự nhập vào
	tính(a, b, c);


	return 0;
}







