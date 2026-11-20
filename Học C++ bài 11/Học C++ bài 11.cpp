// Học C++ bài 11.cpp : switch case c++


#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    // Nhập vào số n,kiểm tra chẵn lẻ của số nhập vào.
    int n;
    wcout << " Mời bạn nhập vào số n bất kỳ :";
    wcin >> n;
    // kiểm tra số dư của n có chia hết cho 2 không .
    int div = n % 2;
    switch (div) {
    case 0:
        wcout << "số " << n << " là số chẵn.";
       
        break;
    default :
        wcout << "số "<< n << " là số lẽ.";
        break;

    }
   


         
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

