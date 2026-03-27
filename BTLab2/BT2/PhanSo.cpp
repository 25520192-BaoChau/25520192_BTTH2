#include "PhanSo.h"
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//Nhap Xuat
void PhanSo::Nhap()
{
	cin >> iTu >> iMau;
	while (iMau == 0)
	{
		cout << "Nhap lai: ";
		cin >> iTu >> iMau;
	} 
	if (iTu == 0) iMau = 1;
}
void PhanSo::Xuat()
{
	if (iMau == 1) cout << iTu;
	else if (iTu == 0) cout << iTu;
	else cout << iTu << "/" << iMau;
}
//tim ucln de rut gon
int ucln(int a, int b)
{
	if (b == 0) return a;
	return ucln(b, a % b);
}
void PhanSo::RutGon()
{
	if (iTu == 0) return;
	int uc = ucln(abs(iTu), abs(iMau));
	iTu /= uc;
	iMau /= uc;
	if (iMau < 0)
	{
		iTu = -iTu;
		iMau = -iMau;
	}
}

//Tinh Toan
//input phan so a, b
//output tong, hieu, tich ,thuong
PhanSo PhanSo::tinhTong(PhanSo ps)
{
	PhanSo tong;
	if (iTu == 0) tong = ps;
	else if (ps.iTu == 0)
	{
		tong.iTu = iTu;
		tong.iMau = iMau;
	}
	else
	{
		tong.iTu = iTu * ps.iMau + ps.iTu * iMau;
		tong.iMau = iMau * ps.iMau;
		tong.RutGon();
	}
	return tong;
}
PhanSo PhanSo::tinhHieu(PhanSo ps)
{
	PhanSo hieu;
	if (iTu == 0)
	{
		hieu.iTu = -ps.iTu;
		hieu.iMau = ps.iMau;
	}
	else if (ps.iTu == 0)
	{
		hieu.iTu = iTu;
		hieu.iMau = iMau;
	}
	else
	{
		hieu.iTu = iTu * ps.iMau - ps.iTu * iMau;
		hieu.iMau = iMau * ps.iMau;
		hieu.RutGon();
	}
	return hieu;
}
PhanSo PhanSo::tinhTich(PhanSo ps)
{
	PhanSo tich;
	if (iTu == 0 || ps.iTu == 0)
	{
		tich.iTu = 0;
		tich.iMau = 1;
	}
	else
	{
		tich.iTu = iTu * ps.iTu;
		tich.iMau = iMau * ps.iMau;
		tich.RutGon();
	}
	return tich;
}
PhanSo PhanSo::tinhThuong(PhanSo ps)
{
	PhanSo thuong;
	if (iTu == 0 || ps.iTu == 0)
	{
		thuong.iTu = 0;
		thuong.iMau = 1;
	}
	else
	{
		thuong.iTu = iTu * ps.iMau;
		thuong.iMau = iMau * ps.iTu;
		thuong.RutGon();
	}
	return thuong;
}
//SO SANH
void PhanSo::soSanh(PhanSo ps)
{
	int left = iTu * ps.iMau;
	int rigth = ps.iTu * iMau;
	if (left > rigth) cout << "Phan so " << iTu << "/" << iMau << " lon hon." << "\n";
	else if (left < rigth) cout << "Phan so " << ps.iTu << "/" << ps.iMau << " lon hon." << "\n";
	else cout << "Hai phan so bang nhau.";
}