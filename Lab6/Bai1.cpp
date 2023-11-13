#include <iostream>
using namespace std;

int main(){
	//Khai bao mang
	int arr[10];
	//Nhap mang
	for(int i = 0; i < 10; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Khai bao tong = 0
	int tong = 0;
	//Chay vong lap de tinh tong, vong lap chay tu 0 den 9
	for(int i = 0; i < 10; i++){
		tong += arr[i];
	}
	//In ra ket qua
	cout << "Tong cac phan tu trong mang: " << tong << endl;
	return 0;
}
