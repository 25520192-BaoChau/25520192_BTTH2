#include "SoPhuc.h"
#include <iostream>
using namespace std;
int main()
{
	SoPhuc a,b;
	cout << "Nhap so thu nhat ";
	a.Nhap();
	cout << "\nNhap so thu hai ";
	b.Nhap();
	cout << "\nTong: ";
	SoPhuc tong=a.tinhTong(b);
	tong.Xuat();
	cout << "\nHieu: ";
	SoPhuc hieu = a.tinhHieu(b);
	hieu.Xuat();
	cout << "\nTich: ";
	SoPhuc tich = a.tinhTich(b);
	tich.Xuat();
	cout << "\nThuong: ";
	SoPhuc thuong = a.tinhThuong(b);
	thuong.Xuat();
}
