#include <iostream>
using namespace std;

int main(){
	//Khai bao 3 bien a, b, c
	int a, b, c;
	
	//Hien thi dong chu "a = "
	cout << "a = ";
	//Nhap a
	cin >> a;
	
	//Hien thi dong chu "b = "
	cout << "b = ";
	//Nhap b
	cin >> b;
	
	//Hien thi dong chu "c = "
	cout << "c = ";
	//Nhap c
	cin >> c;
	
	//Khai bao 1 bien de luu ket qua
	float trungBinh;
	//Tinh trung binh
	trungBinh = (float)(a + b + c) / 3;
	//Hien thi trung binh
	cout << "Trung binh cong cua 3 so a, b, c la: " << trungBinh;
	return 0;
}
