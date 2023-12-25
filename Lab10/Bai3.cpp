#include <iostream>
using namespace std;

//Function nhap
float nhap(){
	int a;
	cin >> a;
	return a;
}
//Function tinh chu vi
float chuVi(float a, float b){
	return 2 * (a + b) ;
}

//Function tinh dien tich 
float dienTich(float a, float b){
	return a * b;
}

//Function main
int main(){
	//Khai bao cd, cr
	float cd, cr;
	//Nhap cd
	cout << "nhap chieu dai: ";
	cd = nhap();
	//Nhap cr
	cout << "nhap chieu rong: ";
	cr = nhap();
	//Goi function tinh chu vi
	float cv = chuVi(cd, cr);
	//Goi function tinh dien tich
	float dt = dienTich(cd, cr);
	//in ket qua
	cout << "chu vi hinh chu nhat la: " << cv << endl;
	cout << "dien tich hinh chu nhat la: "<< dt << endl;
	return 0;
}
