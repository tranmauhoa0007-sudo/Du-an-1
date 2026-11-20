// kiểm tra hàm hash trong visual stadio dùng ngôn ngữ c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <functional>
using namespace std;

int main()
{

    hash<string> sher;

    cout << "Hash cua 123 = " << sher("123") << endl;

    return 0;

}

