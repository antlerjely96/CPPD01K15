#include <iostream>
using namespace std;

//Function nhap
float nhap(){
	float x;
	cin >> x;
	return x;
}
//Function tinh the tich
void theTich(float x, float y, float z){
	float theTich = x * y * z;
	cout << "the tich hinh hop chu nhat: " << theTich << endl;
}
//function main
int main(){
	//Khai bao x, y, z
	float x, y, z;
	//Nhap x
	cout << "x = ";
	x = nhap();
	//Nhap y
	cout << "y = ";
	y = nhap();
	//Nhap z
	cout << "z = ";
	z = nhap();
	//Goi function tinh the tich
	theTich(x, y, z);
	return 0;
}
