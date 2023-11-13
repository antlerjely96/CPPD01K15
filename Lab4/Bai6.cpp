#include <iostream>
using namespace std;

int main(){
	//Khai bao a
	int a, tong = 0;
	//Vong lap de nhap a
	do {
		//Nhap a
		cout << "a = ";
		cin >> a;
	} while (a % 2 == 0);
	//Khoi tao bat dau
	int i = 0;
	//vong lap de tinh tong
	for(i = 0; i < a; i++){
		//Kiem tra i chia het cho 5
		if(i % 5 == 0){
			tong += i;
		}
	}
	//In ra ket qua
	cout << "Tong cac so chia het cho 5 trong khoang tu 1 den a: " << tong;
	return 0;
}
