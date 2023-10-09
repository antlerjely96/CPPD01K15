#include <iostream>
using namespace std;

int main(){
	//Khai bao a, b, c, d
	int a;
	int b;
	int c;
	int d;
	//Nhap a
	cout << "a = ";
	cin >> a;
	//Nhap b
	cout << "b = ";
	cin >> b;
	//Nhap c
	cout << "c = ";
	cin >> c;
	//Nhap d
	cout << "d = ";
	cin >> d;
	//Khai bao va gan max = a
	int max = a;
	//Tim max cua 4 so
	//So sanh max va b de tim ra so lon nhat trong 2 so
	if(max > b){
		max = max;
	} else {
		max = b;
	}
	//So sanh max va c de tim ra so lon nhat trong 2 so
	if(max > c){
		max = max;
	} else {
		max = c;
	}
	//So sanh max va d de tim ra so lon nhat trong 2 so
	if(max > d){
		max = max;
	} else {
		max = d;
	}
	//Khai bao va gan min = a
	int min = a;
	//Tim min
	//So sanh min voi b de tim ra so nho nhat trong 2 so
	if(min < b){
		min = min;
	} else {
		min = b;
	}
	//So sanh min voi c de tim ra so nho nhat trong 2 so
	if(min < c){
		min = min;
	} else {
		min = c;
	}
	//So sanh min voi d de tim ra so nho nhat trong 2 so
	if(min < d){
		min = min;
	} else {
		min = d;
	}
	//Tinh max + min
	//Khai bao bien tong
	int tong;
	//tong = max + min
	tong = max + min;
	//In ra tong
	cout << "max + min = " << tong << endl;
	//Tinh max - min
	//Khai bao bien hieu
	int hieu;
	//hieu = max - min
	hieu = max - min;
	//In ra hieu
	cout << "max - min = " << hieu << endl;
	//Tinh max * min
	//Khai bao bien tich
	int tich;
	//tich = max * min
	tich = max * min;
	//In ra tich
	cout << "max * min = " << tich << endl;
	//Tinh max / min
	//Kiem tra min = 0
	if(min == 0 ){
		cout << "Khong chia duoc max cho min" << endl;
	} else {
		//Khai bao bien thuong
		double thuong;
		//thuong = (double)max / min
		thuong = (double)max / min;
		//In ra thuong
		cout << "max / min = " << thuong << endl;
	}
	return 0;
}
