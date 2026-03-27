#include "ThoiGian.h"
#include <iostream>
#include <iomanip>
using namespace std;
void ThoiGian::Nhap()
{
	cout << "Nhap thoi gian: ";
	cin >> iGio >> iPhut >> iGiay;
	while (iGio > 23 || iGio < 0 || iPhut>59 || iPhut < 0 || iGiay>59 || iGiay < 0)
	{
		cout << "Khong hop le. Nhap lai: ";
		cin >> iGio >> iPhut >> iGiay;
	}
}
void ThoiGian::Xuat()
{
	cout << setfill('0')<< setw(2)<<iGio << ":" <<setw(2)<< iPhut << ":"<< setw(2) << iGiay;
}
ThoiGian ThoiGian::TinhCongThemMotGiay()
{
	ThoiGian time;
	int g = iGio, p = iPhut, s = iGiay+1;
	if (s == 60)
	{
		s = 0;
		p++;
		if (p == 60)
		{
			p = 0;
			g++;
			if (g == 24)
			{
				g = 0;
			}
		}
	}
	time.iGio = g;
	time.iPhut = p;
	time.iGiay = s;
	return time;
}