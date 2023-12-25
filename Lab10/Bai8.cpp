#include <iostream>
using namespace std;

//function nhap
double nhap(){
	double n;
	cin >> n;
	return n;
}
//function kiem tra
void kiemTraTamGiac(double a, double b, double c){
	if(a > 0 && b > 0 && c > 0){
		if(a + b > c && a + c > b && b + c > a){
			cout << "a, b, c la 3 canh tam giac" << endl;
		} else {
			cout << "a, b, c khong la 3 canh tam giac" << endl;
		}
	} else {
		cout << "a, b, c khong la 3 canh tam giac" << endl;
	}
}
int main(){
	//Khai bao a
	cout << "a = ";
	double a = nhap();
	//Khai bao b
	cout << "b = ";
	double b = nhap();
	//Khai bao c
	cout << "c = ";
	double c = nhap();
	//goi function kiem tra
	kiemTraTamGiac(a, b, c);
	return 0;
}
