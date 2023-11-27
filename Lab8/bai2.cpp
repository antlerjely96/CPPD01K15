#include <iostream>
using namespace std;

//Khai bao struct
struct hocSinh{
	string maHocSinh;
	string hoTen;
	string lop;
	float diem15p;
	float diem1tiet;
	float diemCuoiKy;
	float diemTrungBinh;
};

int main(){
	//Khai bao mang 5 hoc sinh
	hocSinh hs[5];
	//Nhap thong tin cua 5 hoc sinh
	cout << "Nhap thong tin cua 5 hoc sinh!" << endl;
	for(int i = 0; i < 5; i++){
		cout << "Hoc sinh thu " << i + 1 << endl;
		cout << "Ma hoc sinh: ";
		getline(cin, hs[i].maHocSinh);
		cout << "Ten hoc sinh: ";
		getline(cin, hs[i].hoTen);
		cout << "Lop: ";
		getline(cin, hs[i].lop);
		cout << "Diem 15p: ";
		cin >> hs[i].diem15p;
		cout << "Diem 1 tiet: ";
		cin >> hs[i].diem1tiet;
		cout << "Diem cuoi ky: ";
		cin >> hs[i].diemCuoiKy;
		cin.ignore();
	}
	//Tinh diem trung binh
	for(int i = 0; i < 5; i++){
		hs[i].diemTrungBinh = (hs[i].diem15p + hs[i].diem1tiet * 2 + hs[i].diemCuoiKy * 3) / 6;
	}
	//Hien thi thong tin
	cout << "Thong tin cua 5 hoc sinh vua nhap!" << endl;
	for(int i = 0; i < 5; i++){
		cout << "Hoc sinh thu " << i + 1 << endl;
		cout << "Ma hoc sinh: " << hs[i].maHocSinh << endl;
		cout << "Ten hoc sinh: " << hs[i].hoTen << endl;
		cout << "Lop: " << hs[i].lop << endl;
		cout << "Diem 15p: " << hs[i].diem15p << endl;
		cout << "Diem 1 tiet: " << hs[i].diem1tiet << endl;
		cout << "Diem cuoi ky: " << hs[i].diemCuoiKy << endl;
		cout << "Diem trung binh: " << hs[i].diemTrungBinh << endl;
	}
	return 0;
}
