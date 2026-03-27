#include "ThoiGian.h"
#include <iostream>
using namespace std;
int main()
{
	ThoiGian time;
	time.Nhap();
	ThoiGian ketQua=time.TinhCongThemMotGiay();
	ketQua.Xuat();
}