#include "SoPhuc.h"
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
void SoPhuc::Nhap()
{
	cout << "\nNhap so thuc: ";
	cin >> dThuc;
	cout << "Nhap so ao: ";
	cin>> dAo;
}

void SoPhuc::Xuat()
{
	cout << dThuc <<" + " << dAo << "i" << "\n";
}
//input: so phuc 1, 2
//output: tong, hieu, tich, thuong
//Tinh Toan
SoPhuc SoPhuc::tinhTong(SoPhuc so)
{
	SoPhuc tong;
	tong.dThuc = dThuc + so.dThuc;
	tong.dAo = dAo + so.dAo;
	return tong;
}
SoPhuc SoPhuc::tinhHieu(SoPhuc so)
{
	SoPhuc hieu;
	hieu.dThuc = dThuc - so.dThuc;
	hieu.dAo = dAo - so.dAo;
	return hieu;
}
SoPhuc SoPhuc::tinhTich(SoPhuc so)
{
	SoPhuc tich;
	tich.dThuc = dThuc *so.dThuc - dAo *so.dAo;
	tich.dAo = dThuc *so.dAo + dAo *so.dThuc;
	return tich;
}
//Kiem tra mau so & tinh thuong
SoPhuc SoPhuc::tinhThuong(SoPhuc so)
{
	SoPhuc thuong;
	double mauSo = so.dThuc * so.dThuc + so.dAo * so.dAo;
	if (mauSo == 0)
	{
		cout << "Loi: Khong the chia cho 0.\n";
		thuong.dThuc = 0;
		thuong.dAo = 0;
		return thuong;
	}
	thuong.dThuc = (dThuc * so.dThuc + dAo * so.dAo)/(so.dThuc *so.dThuc +so.dAo *so.dAo);
	thuong.dAo = (dAo * so.dThuc - dThuc * so.dAo)/ (so.dThuc * so.dThuc + so.dAo * so.dAo);
	return thuong;
}