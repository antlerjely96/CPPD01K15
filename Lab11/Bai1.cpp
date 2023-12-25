#include <iostream>
using namespace std;

//function nhap
int nhap(){
	int a;
	cin >> a;
	return a;
}
//function tim max
int timMax(int a, int b, int c, int d){
	//Gan max = a
	int max = a;
	//So sanh max voi b
	if(max < b){
		max = b;
	}
	//So sanh max voi c
	if(max < c){
		max = c;
	}
	//So sanh max voi d
	if(max < d){
		max = d;
	}
	//Tra ve max
	return max;
}
//function tim min
int timMin(int a, int b, int c, int d){
	//Gan min = a
	int min = a;
	//So sanh min voi a
	if(min > a){
		min = a;
	}
	//So sanh min voi b
	if(min > b){
		min = b;
	}
	//so sanh min voi c
	if(min > c){
		min = c;
	}
	//Tra ve min
	return min;
}
//function tinh tong
void tinhTong(int a, int b, int c, int d){
	//Khai bao max
	int max = timMax(a, b, c, d);
	//Khai bao min
	int min = timMin(a, b, c, d);
	//Tinh max + min
	int tong = max + min;
	cout << "max + min = " << tong << endl;
}
//function tinh hieu
void tinhHieu(int a, int b, int c, int d){
	//Khai bao max
	int max = timMax(a, b, c, d);
	//Khai bao min
	int min = timMin(a, b, c, d);
	//Tinh max - min
	int hieu = max - min;
	cout << "max - min = " << hieu << endl;
}
//function tinh tich
void tinhTich(int a, int b, int c, int d){
	//Khai bao max
	int max = timMax(a, b, c, d);
	//Khai bao min
	int min = timMin(a, b, c, d);
	//Tinh max * min
	int tich = max * min;
	cout << "max * min = " << tich << endl;
}
//function tinh thuong
void tinhThuong(int a, int b, int c, int d){
	//Khai bao max
	int max = timMax(a, b, c, d);
	//Khai bao min
	int min = timMin(a, b, c, d);
	//Tinh max - min
	if(min == 0){
		cout << "Khong ton tai max / min" << endl;
	} else {
		double thuong = (double)max / min;
		cout << "max / min = " << thuong << endl;
	}
}
int main(){
	//Khai bao a
	cout << "a = ";
	int a = nhap();
	//Khai bao b
	cout << "b = ";
	int b = nhap();
	//Khai bao c
	cout << "c = ";
	int c = nhap();
	//Khai bao d
	cout << "d = ";
	int d = nhap();
	//Goi function tinh tong
	tinhTong(a, b, c, d);
	//Goi function tinh hieu
	tinhHieu(a, b, c, d);
	//Goi function tinh tich
	tinhTich(a, b, c, d);
	//Goi function tinh thuong
	tinhThuong(a, b, c, d);
	return 0;
}
