#include <iostream>
using namespace std;

//fucntion nhap
int nhap(){
	int n;
	do {
		cin >> n;
		if(n % 2 == 0){
			cout << "Nhap lai!" << endl;
		}
	} while(n % 2 == 0);
}
//function tinh tong
int tinhTong(int a){
	//Khai bao tong = 0;
	int tong = 0;
	//Vong lap i chay tu 1 den a
	for(int i = 1; i <= a; i++){
		if(i % 5 == 0){
			tong += i;
		}
	}
	//In ra ket qua
	cout << "Tong cac so chia het cho 5 trong khoang tu 1 den a: " << tong << endl;
}
int main(){
	//Khai bao n
	int a = nhap();
	//Goi function tinh tong
	tinhTong(a);
	return 0;
}
