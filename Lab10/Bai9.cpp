#include <iostream>
using namespace std;

//function nhap
double nhap(){
	double n;
	cin >> n;
	return n;
}
//function so sanh
void tinhMax(double a, double b, double c){
	//Gan max = a
	double max = a;
	//So sanh max voi b
	if(max < b){
		max = b;
	}
	//So sanh max voi c
	if(max < c){
		max = c;
	}
	//Hien thi max
	cout << "So lon nhat trong 3 so la: " << max << endl;
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
	//Goi function tinhMax
	tinhMax(a, b, c);
}
