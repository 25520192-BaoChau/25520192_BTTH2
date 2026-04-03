#include "PhanSo.h"
#include <iostream>
using namespace std;
int main()
{
	//Nhap hai phan so
	PhanSo a, b;
	cout << "Nhap phan so 1: ";
	a.Nhap();
	cout << "Nhap phan so 2: ";
	b.Nhap();
	cout << "\n";

	//Rut Gon
	cout << "Phan so 1 sau khi rut gon: ";
	a.RutGon();
	a.Xuat();
	cout << "\nPhan so 2 sau khi rut gon: ";
	b.RutGon();
	b.Xuat();

	//Tinh toan
	cout << "\n\nTong: ";
	PhanSo tong= a.tinhTong(b);
	tong.Xuat();
	cout << "\nHieu: ";
	PhanSo hieu = a.tinhHieu(b);
	hieu.Xuat();
	cout << "\nTich: ";
	PhanSo tich = a.tinhTich(b);
	tich.Xuat();
	cout << "\nThuong: ";
	PhanSo thuong = a.tinhThuong(b);
	thuong.Xuat();
	cout << "\n\n";

	//So sanh
	a.soSanh(b);
}