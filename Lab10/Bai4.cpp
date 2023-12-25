#include <iostream>
#include <cmath>
using namespace std;

//Function nhap
int nhap(){
	int a;
	cin >> a;
	return a;
}

//function tinh p
int tinhp(int x, int y){
	int p = x * y;
	return p;
}

//function tinh s
int tinhs(int x, int y){
	int s = x + y;
	return s;
}

//function tinh q
void tinhq(int x, int y){
	//goi function tinh p
	int p = tinhp(x, y);
	cout << "p = x * y = " << p << endl;
	//Goi function tinh s
	int s = tinhs(x, y);
	cout << "s = x + y = " << s << endl;
	//Tinh q
	int q = pow(s, 2) + p * (s - x) * (p + y);
	cout << "q = s ^ 2 + p (s - x) * (p + y) = " << q << endl;
}
int main(){
	//Khai bao x, y
	int x, y;
	//Nhap x
	cout << "x = ";
	x = nhap();
	//Nhap y
	cout << "y = ";
	y = nhap();
	//Goi function
	tinhq(x, y);
} 
