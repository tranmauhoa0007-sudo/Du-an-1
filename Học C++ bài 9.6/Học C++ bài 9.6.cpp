// Học C++ bài 9.6.cpp : bài tập kiểm tra quý trong năm vận dụng if -else.


#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;


int main()
{
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    
    /*
        Bài tập  C++ 10. Viết chương trình nhập vào tháng trong năm ,cho biết tháng đó thuộc quý mấy .
        Gợi ý  :
                    1 năm có 4 quý ,mỗi tháng có 3 quý .
                        + Qúy 1 : tháng  1,2,3
                        + Qúy 2 : tháng  4,5,6
                        + Qúy 3 : tháng  7,8,9
                        + Qúy 4 : tháng 10,11,12
    */
     
    int tháng,năm;
    wcout << L"Mời bạn nhập vào tháng :";
    wcin >> tháng;
    wcout << L" Mời bạn nhập vào năm :";
    wcin >> năm;

    // kiểm tra tháng người  dùng nhập thuộc quý nào .
    if (tháng == 1 || tháng == 2 || tháng == 3)
    {
        wcout << L" Tháng  " << tháng << L"  thuộc quý 1 của năm : "  << năm << endl;
    }
    else if (tháng == 4 || tháng == 5 || tháng == 6 )
    {
        wcout << L"Tháng " << tháng << L"thuộc quý 2 của năm : " << năm << endl;
    }
    else if (tháng == 7 || tháng == 8 || tháng == 9)
    {
        wcout << L"Tháng  " << tháng << L" thuộc quý 3 của năm :  " << năm << endl;
    }
    else if (tháng == 10 || tháng == 11 || tháng == 12)
    {
        wcout << L"Tháng " << tháng << L" thuộc quý 4 của năm  : "  << năm << endl;

    }
    else
    {
        wcout << L"Tháng " << tháng << L" tháng tào lao ." << endl;
    }
    // dùng switch -case để kiểm tra quý trong năm
    switch (tháng)
    {
     case 1:
             wcout << L" Tháng  " << tháng << L"  thuộc quý 1 của năm : " << năm << endl;
             break;
   
     case 2:
            wcout << L" Tháng  " << tháng << L"  thuộc quý 1 của năm : " << năm << endl;
            break;
     case 3:
            wcout << L" Tháng  " << tháng << L"  thuộc quý 1 của năm : " << năm << endl;
     case 4:
            wcout << L" Tháng  " << tháng << L"  thuộc quý 1 của năm : " << năm << endl;
            break;
     case 5:
            wcout << L" Tháng  " << tháng << L"  thuộc quý 1 của năm : " << năm << endl;
            break;
     case 6:
         wcout << L" Tháng  " << tháng << L"  thuộc quý 1 của năm : " << năm << endl;
         break;
     case 7:
         wcout << L" Tháng  " << tháng << L"  thuộc quý 1 của năm : " << năm << endl;
         break;
     case 8:
         wcout << L" Tháng  " << tháng << L"  thuộc quý 1 của năm : " << năm << endl;
         break;
     case 9:
         wcout << L" Tháng  " << tháng << L"  thuộc quý 1 của năm : " << năm << endl;
         break;
     case 10:
         wcout << L" Tháng  " << tháng << L"  thuộc quý 1 của năm : " << năm << endl;
         break;
     case 11:
         wcout << L" Tháng  " << tháng << L"  thuộc quý 1 của năm : " << năm << endl;
         break;
     case 12:
         wcout << L" Tháng  " << tháng << L"  thuộc quý 1 của năm : " << năm << endl;
         break;
     default:
         wcout << L"Tháng " << tháng << L" tháng tào lao ." << endl;
    }















   


















    



    

   


    return 0; 

}
