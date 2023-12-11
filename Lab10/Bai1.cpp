#include <iostream>
using namespace std;

//Function nhap
int nhap(){
	int a;
	cin >> a;
	//Tra ve gia tri a khi goi function
	return a;
}
//Function tinh tong
void tinhTong(int a, int b){
	int tong = a + b;
	cout << "a + b = " << tong << endl;
}
//Function tinh hieu
void tinhHieu(int x, int y){
	int hieu = x - y;
	cout << "a - b = " << hieu << endl;
}
//Function tinh tich
void tinhTich(int n, int m){
	int tich = n * m;
	cout << "a * b = " << tich << endl;
}
//Function tinh thuong
void tinhThuong(int a, int b){
	float thuong = (float)a / b;
	cout << "a / b = " << thuong << endl;
}
//Function main (luu y: trong 1 chuong trinh chi co 1 ham main)
int main(){
	int a, b;
	//Nhap
	cout << "a = ";
	//Tao ra bien a de chua gia tri duoc tra ve tu ham nhap
	a = nhap();
	cout << "b = ";
	//Tao ra bien b de chua gia tri duoc tra ve tu ham nhap
	b = nhap();
	//tinh tong
	tinhTong(a, b);
	//tinh hieu
	tinhHieu(a, b);
	//tinh tich
	tinhTich(a, b);
	//tinh thuong
	tinhThuong(a, b);
	return 0;
}
