// Học C++ bài 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP (CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // khai báo biến n
    int n;
    cout << ("Nhập vào số nguyên n :");
    cin >> n;
    // xét điều kiện 
    string trả_lời = (n % 2 == 0) ?  "chẵn " :"Lẽ";
    cout  <<   trả_lời << endl;






}

