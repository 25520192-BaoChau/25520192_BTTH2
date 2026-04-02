#pragma once
class PhanSo
{
private:
	int iTu;
	int iMau;
public:
	void Nhap();
	void Xuat();
	void RutGon();
	PhanSo tinhTong(PhanSo ps);
	PhanSo tinhHieu(PhanSo ps);
	PhanSo tinhTich(PhanSo ps);
	PhanSo tinhThuong(PhanSo ps);
	void soSanh(PhanSo ps);
};