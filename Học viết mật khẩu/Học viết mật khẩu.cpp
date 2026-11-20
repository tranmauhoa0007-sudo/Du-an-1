// Học viết mật khẩu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <functional>

using namespace std;

int main()
{
	string password;
	//hash của mật khẩu gốc
	size_t stored_hash = 5003431119771845851; // Thay đổi giá trị này thành hash của mật khẩu gốc
	cout << "Nhập mật khẩu";
	cin >> password;

	hash <string> hasher;
	size_t entered_hash = hasher(password);
	if (entered_hash == stored_hash) {
		cout << "Truy cap duoc chap nhan!\n";
	}
	else {
		cout << "Sai mat khau!\n";
	}

	return 0;

}
