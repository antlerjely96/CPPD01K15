#include <iostream>
using namespace std;

float Nhap() {
	float var;
	cin >> var;
	return var;
}

float TrungBinhCong(float a, float b, float c) {
	return (a + b + c) / 3;
}

int main(){
	float a, b, c, tbc;
	a = Nhap();
	b = Nhap();
	c = Nhap();
	tbc = TrungBinhCong(a, b, c);
	cout << tbc << endl;
}
