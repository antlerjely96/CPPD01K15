#include <iostream>
using namespace std;

//Khai bao struct
struct nhanvien{
	string manv;
	string ten;
	int tuoi;
	int luong;
	int sogio;
	int thang;
	int tienthuong;
	int tongtien;
};

int main(){
	//Khai bao mang co 10 nhan vien
	nhanvien nv[10];
	//Nhap thong tin cua 10 nhan vien
	for(int i = 0; i < 10; i++){
		cout << "Thong tin cac nhan vien ";
		cout << "Nhan vien thu " << i + 1 << endl;
		//Nhap ma nhan vien
		cout << "ma nhan vien ";
		cin.ignore();
		getline(cin, nv[i].manv);
		//Nhap ten nhan vien
		cout << "ten: ";
		getline(cin, nv[i].ten);
		//Nhap tuoi nhan vien
		cout << "tuoi: ";
		cin >> nv[i].tuoi;
		//Nhap luong nhan vien
		cout << "luong: ";
		cin >> nv[i].luong;
		//Nhap so gio
		cout << "so gio:";
		cin >> nv[i].sogio;
		//Nhap thang
		cout << "thang: ";
		cin >> nv[i].thang;
	}
	//Tinh tien thuong cua 10 nhan vien
	for(int i = 0; i < 10; i++){
		if(nv[i].sogio > 200){
			nv[i].tienthuong = nv[i].luong * 0.2;
		} else if(nv[i].sogio > 100){
			nv[i].tienthuong = nv[i].luong * 0.1;
		} else {
			nv[i].tienthuong = 0;
		}
	}
	//Tinh tong tien
	for (int i = 0; i < 10; i++){
		nv[i].tongtien = nv[i].luong + nv[i].tienthuong;
	}
	// Nhan vien luong cao nhat
	//Khai bao luong max
	int maxLuong = nv[0].luong;
	//Tim maxLuong
	for(int i = 0; i < 10; i++){
		if(maxLuong < nv[i].luong){
			maxLuong = nv[i].luong;
		}
	}
	//Hien thi thong tin co luong = maxLuong
	for(int i = 0; i < 10; i++){
		if(nv[i].luong == maxLuong){
			cout << "Nhan vien thu " << i + 1 << endl;
			cout << "Ma nhan vien " << nv[i].manv << endl;
			cout << "Ten: " << nv[i].ten << endl;
			cout << "Tuoi: " << nv[i].tuoi << endl;
			cout << "Luong: " << nv[i].luong << endl;
			cout << "So gio:" << nv[i].sogio << endl;
			cout << "Thang: " << nv[i].thang << endl;
			cout << "Tien thuong: " << nv[i].tienthuong << endl;
			cout << "Tong tien nhan duoc: " << nv[i].tongtien << endl;
		}
	}
	//Hien thi thong tin nhan vien co tuoi = 24
	for(int i = 0; i < 10; i++){
		if (nv[i].tuoi == 24){
			cout << "Nhan vien thu " << i + 1 << endl;
			cout << "Ma nhan vien " << nv[i].manv << endl;
			cout << "Ten: " << nv[i].ten << endl;
			cout << "Tuoi: " << nv[i].tuoi << endl;
			cout << "Luong: " << nv[i].luong << endl;
			cout << "So gio:" << nv[i].sogio << endl;
			cout << "Thang: " << nv[i].thang << endl;
			cout << "Tien thuong: " << nv[i].tienthuong << endl;
			cout << "Tong tien nhan duoc: " << nv[i].tongtien << endl;
		}
	}
	//Danh sach nhan vien theo thu tu luong tang dan
	//Tao bien temp co kieu du lieu struct
	nhanvien temp;
	//Sap xep
	for(int i = 0; i < 9; i++){
		for(int j = i + 1; j < 10; j++){
			if(nv[i].luong > nv[j].luong){
				//gan temp = nv[i]
				temp.manv = nv[i].manv;
				temp.ten = nv[i].ten;
				temp.tuoi = nv[i].tuoi;
				temp.thang = nv[i].thang;
				temp.sogio = nv[i].sogio;
				temp.luong = nv[i].luong;
				temp.tienthuong = nv[i].tienthuong;
				temp.tongtien = nv[i].tongtien;
				//gan nv[i] = nv[j]
				nv[i].manv = nv[j].manv;
				nv[i].ten = nv[j].ten;
				nv[i].tuoi = nv[j].tuoi;
				nv[i].thang = nv[j].thang;
				nv[i].sogio = nv[j].sogio;
				nv[i].luong = nv[j].luong;
				nv[i].tienthuong = nv[j].tienthuong;
				nv[i].tongtien = nv[j].tongtien;
				//gan nv[j] = temp
				nv[j].manv = temp.manv;
				nv[j].ten = temp.ten;
				nv[j].tuoi = temp.tuoi;
				nv[j].thang = temp.thang;
				nv[j].sogio = temp.sogio;
				nv[j].luong = temp.luong;
				nv[j].tienthuong = temp.tienthuong;
				nv[j].tongtien = temp.tongtien;
			}
		}
	}
	//Hien thi danh sach da sap xep
	for(int i = 0; i < 10; i++){
		cout << "Nhan vien thu " << i + 1 << endl;
		cout << "Ma nhan vien " << nv[i].manv << endl;
		cout << "Ten: " << nv[i].ten << endl;
		cout << "Tuoi: " << nv[i].tuoi << endl;
		cout << "Luong: " << nv[i].luong << endl;
		cout << "So gio:" << nv[i].sogio << endl;
		cout << "Thang: " << nv[i].thang << endl;
		cout << "Tien thuong: " << nv[i].tienthuong << endl;
		cout << "Tong tien nhan duoc: " << nv[i].tongtien << endl;
	}
	return 0;
}
