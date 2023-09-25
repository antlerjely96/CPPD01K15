/* 
	Nhap 2 so nguyen a va b tu ban phim
	Tinh tong, hieu, tich, thuong cua a va b.
	Sau do in ra tong, hieu, tich, thuong
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao 2 bien a va b
	int a;
	int b;
	//Hien thi dong chu "Nhap a:"
	cout << "Nhap a: ";
	//Nhap a
	cin >> a;
	//Hien thi dong chu "Nhap a:"
	cout << "Nhap b: ";
	//Nhap b
	cin >> b;
	//Khai bao bien tong de luu tru ket qua cua phep tinh a + b
	int tong;
	//Tinh sum = a + b
	tong = a + b;
	//In ra tong
	cout << "Tong 2 so a, b la: " << tong << "\n";
	//Khai bao bien hieu de luu tru ket qua cua phep tinh a - b
	int hieu;
	//Tinh hieu = a - b
	hieu = a - b;
	//In ra hieu
	cout << "Hieu 2 so a, b la: " << hieu << "\n";
	//Khai bao bien tich de luu tru ket qua cua phep tich a - b
	int tich;
	//Tinh tich = a * b
	tich = a * b;
	//In ra tich
	cout << "Tich 2 so a, b la: " << tich << "\n";
	//Khai bao bien thuong de luu tru ket qua cua phep thuong a / b
	double thuong;
	//Tinh thuong = a / b
	thuong = (double)a / b;
	//In ra tich
	cout << "Thuong 2 so a, b la: " << thuong << "\n";
	return 0;
}
