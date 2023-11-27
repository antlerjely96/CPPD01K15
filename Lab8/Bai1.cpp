#include <iostream>
using namespace std;
//Khai bao struct phanSo gom 2 thanh vien la tuSo, mauSo
struct phanSo{
	float tuSo;
	float mauSo;
};

int main(){
	//Khai bao 2 phan so
	phanSo ps1, ps2;
	//Nhap phan so 1
	cout << "Nhap phan so 1: " << endl;
	cout << "Tu so = ";
	cin >> ps1.tuSo;
	cout << "Mau so = ";
	cin >> ps1.mauSo;
	//Nhap phan so 2
	cout << "Nhap phan so 2: " << endl;
	cout << "Tu so = ";
	cin >> ps2.tuSo;
	cout << "Mau so = ";
	cin >> ps2.mauSo;
	//Tinh tong 2 phan so
	phanSo tong;
	if(ps1.mauSo == ps2.mauSo){
		tong.mauSo = ps1.mauSo;
		tong.tuSo = ps1.tuSo + ps2.tuSo;
	} else {
		tong.tuSo = ps1.tuSo * ps2.mauSo + ps2.tuSo * ps1.mauSo;
		tong.mauSo = ps1.mauSo * ps2.mauSo;
	}
	cout << "Tong cua 2 phan so " << ps1.tuSo << "/" << ps1.mauSo << " va " << ps2.tuSo << "/" << ps2.mauSo << " la: ";
	cout << tong.tuSo << "/" << tong.mauSo;
	//Tinh hieu 2 phan so
	phanSo hieu;
	if(ps1.mauSo == ps2.mauSo){
		hieu.mauSo = ps1.mauSo;
		hieu.tuSo = ps1.tuSo - ps2.tuSo;
	} else {
		hieu.tuSo = ps1.tuSo * ps2.mauSo - ps2.tuSo * ps1.mauSo;
		hieu.mauSo = ps1.mauSo * ps2.mauSo;
	}
	cout << "Hieu cua 2 phan so " << ps1.tuSo << "/" << ps1.mauSo << " va " << ps2.tuSo << "/" << ps2.mauSo << " la: ";
	cout << hieu.tuSo << "/" << hieu.mauSo;
	//Tinh tich 2 phan so
	phanSo tich;
	tich.tuSo = ps1.tuSo * ps2.tuSo;
	tich.mauSo = ps1.mauSo * ps2.mauSo;
	cout << "Tich cua 2 phan so " << ps1.tuSo << "/" << ps1.mauSo << " va " << ps2.tuSo << "/" << ps2.mauSo << " la: ";
	cout << tich.tuSo << "/" << tich.mauSo;
	//Tinh thuong 2 phan so
	phanSo thuong;
	thuong.tuSo = ps1.tuSo * ps2.mauSo;
	thuong.mauSo = ps1.mauSo * ps2.tuSo;
	cout << "Thuong cua 2 phan so " << ps1.tuSo << "/" << ps1.mauSo << " va " << ps2.tuSo << "/" << ps2.mauSo << " la: ";
	cout << thuong.tuSo << "/" << thuong.mauSo;
	return 0;
}
