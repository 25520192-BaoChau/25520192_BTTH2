#include "Date.h"
#include <iostream>
using namespace std;
void Date::Nhap()
{
	while (true) 
	{
		cout << "Nhap ngay thang nam: ";

		if (cin >> Ngay >> Thang >> Nam)
		{
			if (Thang >= 1 && Thang <= 12 && Nam >= 1900 && Nam <= 2100)
			{
				break; 
			}
		}
		cout << "Loi: Dinh dang khong hop le hoac nam ngoai pham vi cho phep!\n";
		cin.clear(); 
		cin.ignore(1000, '\n'); 
	}
	cout << "\n";
}
void Date::Xuat()
{
	cout << Ngay <<"/" << Thang<<"/" << Nam;
}
//intput: ngay
//ouput: ngay tiep theo
//Xac dinh nhung thang co 31 ngay
//Xac dinh ngay cua thang 2 voi nam nhuan va khong nhuan
//Cuoi thang
void Date:: timNgayThangNamTiepTheo()
{
	int numDay=30;
	if (Thang == 1 || Thang == 3 ||Thang == 5 || Thang == 7 || Thang == 8 || Thang == 10 || Thang == 12)
	{
		numDay = 31;
	}
	else if (Thang == 2)
	{
		if ((Nam % 400 == 0 && Nam % 100 != 0) || (Nam % 4 == 0))numDay = 29;
	    else numDay = 28;
	}
	if (Ngay<1 || Ngay>numDay)
	{
		cout << "Ngay khong hop le." << "\n";
		Nhap();
	}
	else if (Ngay < numDay) Ngay++;
	else 
	{
		Ngay =1;
		if (Thang == 12)
		{
			Thang = 1;
			Nam++;
		}
		else
		{
			Thang++;
		}
	}
}