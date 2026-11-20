// Học C++ Bài 13.cpp : Vòng lặp do-While and While -True

#include <iostream>
using namespace std;

int main()
{
    // khái báo biến .
    int a;
    // cho người dùng nhập từ bàn phím
    cout << "Mời bạn nhập vào số bất kỳ :";
    cin >> a;
    // tính tổng các số chẵn và số lẽ từ số a khi người dùng nhập vào.
    int tổng =0;
    int tổng_1 =0;
    for (int i = 0;i <= a;i++) {
        if (i % 2 == 0) {
            tổng = tổng + i;
            cout << "in biến i :" << i << endl;
            cout << "in quá trình tính tổng số chẵn :" << tổng << endl;
        }
    }
    cout << "tổng các số chẵn là :" << tổng << endl;

    for (int i = 0;i <= a;i++) {

        if (i % 2 != 0)
        {
            cout << "in biến i :" << i << endl;
            tổng_1 = tổng_1 + i;
            cout << " in quá trình tính tổng số lẽ :" << tổng_1 << endl;

        }
    }
    cout << "tổng các số lẽ là :" << tổng_1<< endl;
   }
    
    
