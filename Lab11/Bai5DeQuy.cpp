#include <iostream>
using namespace std;

//function nhap n
int nhap(){
	int n;
	cin >> n;
	return n;
}
//Fucntion de quy de tinh tong
int tinhTong(int n){
	if(n == 0){
		return 0;
	}
	return n + tinhTong(n - 1);
}
int main(){
	//Khai bao n
	int n = nhap();
	//Goi function tinh tong
	int tong = tinhTong(n);
	cout << "Tong cac so tu 1 den n: " << tong << endl;
	return 0;
}
