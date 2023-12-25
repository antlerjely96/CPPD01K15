#include <iostream>
#include <cmath>
using namespace std;

//function nhap
int nhap(){
	int a;
	cin >> a;
	return a;
}
//function tinh nghiem
void tinhNghiem(int a, int b, int c){
	if(a == 0){
		if(b == 0){
			if(c == 0){
				cout << "Vo so nghiem" << endl;
			} else {
				cout << "Vo nghiem" << endl;
			}
		} else {
			double x = (double)(-c) / b;
			cout << "Nghiem x = " << x << endl;
		}
	} else {
		double delta = pow(b, 2) - 4 * a * c;
		if(delta < 0){
			cout << "Vo so nghiem" << endl;
		} else if(delta == 0){
			double x = (double)(-b) / (2 * a);
			cout << "Nghiem x1 = x2 = " << x << endl;
		} else {
			double x1 = ((double)(-b) + sqrt(delta)) / (2 * a);
			double x1 = ((double)(-b) - sqrt(delta)) / (2 * a);
			cout << "Nghiem x1 = " << x1 << endl;
			cout << "Nghiem x2 = " << x2 << endl;
		}
	}
}
int main(){
	//Khai bao x
	cout << "x = ";
	int x = nhap();
	//Khai bao y
	cout << "y = ";
	int y = nhap();
	//Khai bao z
	cout << "z = ";
	int z = nhap();
	//Goi function tinh
	tinhNghiem(x, y, z);
	return 0;
}
