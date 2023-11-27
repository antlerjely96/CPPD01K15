//Nhap va hien thi thong tin cua 3 sv gom maSV, hoTen, tuoi, email
#include <iostream>
using namespace std;
//Khai bao struct sinhVien co cac thanh phan la maSinhVien, hoTen, tuoi, email
struct sinhVien{
	string maSinhVien;
	string hoTen;
	int tuoi;
	string email;
};
	
int main(){
	//Khai bao mang 3 sv
	sinhVien sv[3];
	//Nhap thong tin cho 3 sv
	cout << "Nhap thong tin cho sinh vien" << endl;
	for(int i = 0; i < 3; i++){
		cout << "Sinh vien thu " << i + 1 << " : " << endl;;
		cout << "Ma sinh vien: ";
		getline(cin, sv[i].maSinhVien);
		cout << "Ho ten: ";
		getline(cin, sv[i].hoTen);
		cout << "Tuoi: ";
		cin >> sv[i].tuoi;
		cout << "Email: ";
		cin.ignore();
		getline(cin, sv[i].email);
	}
	cout << endl;
	cout << "========================" << endl;
	cout << "Thong tin cua cac sinh vien vua nhap: " << endl;
	//Hien thi thong tin 3 sv
	for(int i = 0; i < 3; i++){
		cout << "Sinh vien thu " << i + 1 << " : " << endl;
		cout << "Ma sinh vien: " << sv[i].maSinhVien << endl;
		cout << "Ho ten: " << sv[i].hoTen << endl;
		cout << "Tuoi: " << sv[i].tuoi << endl;
		cout << "Email: " << sv[i].email << endl;
		cout << "------------------------" << endl;
	}
	return 0;
}
