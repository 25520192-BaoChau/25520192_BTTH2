#pragma once
class SoPhuc
{
private:
	double dThuc;
	double dAo;
public:
	void Nhap();
	void Xuat();
	SoPhuc tinhTong(SoPhuc so);
	SoPhuc tinhHieu(SoPhuc so);
	SoPhuc tinhTich(SoPhuc so);
	SoPhuc tinhThuong(SoPhuc so);
};