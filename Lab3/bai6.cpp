#include <iostream>
using namespace std;

int main(){
	//Khai bao bien
	int thuNhapHangThang;
	int soNguoiPhuThuoc;
	int luongDongBaoHiem;
	double baoHiemBatBuoc;
	double thuNhapTinhThue;
	double thueThuNhapCaNhan;
	//Khai bao hang so
	const int giamTruBanThan = 11000000;
	//Nhap thuNhapHangThang
	cout << "Thu nhap hang thang: ";
	cin >> thuNhapHangThang;
	//Nhap soNguoiPhuThuoc
	cout << "So nguoi phu thuoc: ";
	cin >> soNguoiPhuThuoc;
	//Nhap luongDongBaoHiem
	cout << "Luong dong bao hiem: ";
	cin >> luongDongBaoHiem;
	//Tinh baoHiemBatBuoc
	baoHiemBatBuoc = luongDongBaoHiem * 0.08 + luongDongBaoHiem * 0.15 + luongDongBaoHiem * 0.1;
	//Tinh thuNhapTinhThue
	thuNhapTinhThue = thuNhapHangThang - baoHiemBatBuoc - giamTruBanThan - soNguoiPhuThuoc * 4400000;
	//Kiem tra thuNhapTinhThue va tinh thueThuNhapCaNhan
	if(thuNhapTinhThue < 0){
		//Neu thuNhapTinhThue < 0 dung
		thueThuNhapCaNhan = 0;
	} else if(thuNhapTinhThue <= 5000000){
		//Neu thuNhapTinhThue < 0 sai va thuNhapTinhThue <= 5000000 dung
		thueThuNhapCaNhan = thuNhapTinhThue * 0.05;
	} else if(thuNhapTinhThue <= 10000000){
		//Neu thuNhapTinhThue < 5000000 sai va thuNhapTinhThue <= 10000000 dung
		thueThuNhapCaNhan = thuNhapTinhThue * 0.1 - 250000;
	} else if(thuNhapTinhThue <= 18000000){
		//Neu thuNhapTinhThue < 10000000 sai va thuNhapTinhThue <= 18000000 dung
		thueThuNhapCaNhan = thuNhapTinhThue * 0.15 - 750000;
	} else if(thuNhapTinhThue <= 32000000){
		//Neu thuNhapTinhThue < 18000000 sai va thuNhapTinhThue <= 32000000 dung
		thueThuNhapCaNhan = thuNhapTinhThue * 0.2 - 1650000;
	} else if(thuNhapTinhThue <= 52000000){
		//Neu thuNhapTinhThue < 32000000 sai va thuNhapTinhThue <= 52000000 dung
		thueThuNhapCaNhan = thuNhapTinhThue * 0.25 - 3250000;
	} else if(thuNhapTinhThue <= 80000000){
		//Neu thuNhapTinhThue < 52000000 sai va thuNhapTinhThue <= 80000000 dung
		thueThuNhapCaNhan = thuNhapTinhThue * 0.3 - 5850000;
	} else {
		//Neu thuNhapTinhThue <= 80000000 sai
		thueThuNhapCaNhan = thuNhapTinhThue * 0.35 - 9850000;
	}
	//In ra thueThuNhapCaNhan
	cout << "Thue thu nhap ca nhan: " << thueThuNhapCaNhan << endl;
	return 0;
}
