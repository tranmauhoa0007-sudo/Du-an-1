    // Học C++ bài 9.4.cpp :Kiểm tra số ngày trong tháng vận dụng if-else

#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;


int main()
{
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    

    /*
        Viết chương trình cho người dùng nhập vào  1 tháng bất kỳ trong năm (1-12) 
        => cho biết tháng đó có bao nhiêu ngày.
        Gợi ý :
		            - Tháng 1,3,5,7,8,10,12 có 31 ngày 
		            - Tháng 4,6,9,11 có 30 ngày
		            - Tháng 2 có 28 hoặc 29 ngày (tùy năm nhuận)
            Nếu tháng 2 thì yêu cầu nhập thêm năm :
					  -Nếu năm nhuận thì tháng 2 có 29 ngày.
                      -Nếu năm không nhuận thì tháng 2 có 28 ngày.
   */

    int tháng, năm;
    wcout << L" Mời bạn nhập tháng bất kỳ từ 1-12 :";
    wcin >> tháng;
    // kiểm tra điều kiện khi người dùng nhập vào là tháng 2
    if (tháng == 2)
    {

        wcout << L" Mời bạn nhập thêm năm :";
        wcin >> năm;
        // kiểm tra năm nhập vào là năm nhuận hay không 
        if ((năm % 4 == 0 && năm % 100 != 0) || (năm % 400 == 0))
        {
            wcout << L"Tháng " << tháng << L" năm " << năm << L" có 29 ngày." << endl;
        }
        else
        {
            wcout << L"Tháng " << tháng << L" năm " << năm << L" có 28 ngày." << endl;
        }
    }
    else if (tháng == 1 || tháng == 3 || tháng == 5 || tháng == 7 || tháng == 8 || tháng == 10 || tháng == 12)
    {
        wcout << L"Tháng " << tháng << L" có 31 ngày." << endl;
    }
    else if (tháng == 4 || tháng == 6 || tháng == 9 || tháng == 11)
    {
        wcout << L"Tháng " << tháng << L" có 30 ngày." << endl;
    }
    else
    {
        wcout << L"Tháng " << tháng << L" không hợp lệ. xin vui lòng nhập lại." << endl;
    }

    return 0;
}

