#include <iostream>
using namespace std;

int main(){
	//Khai bao mang
	float arr[5];
	//vong lap chay tu 0 den 4 de nhap mang
	for(int i = 0; i < 5; i++){
		//Nhap phan tu thu i cua mang
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Khai bao tich = 1
	float tich = 1.0;
	//Vong lap chay tu 0 den 4 de tinh tich cac phan tu cua mang
	for(int i = 0; i < 5; i++){
		//Tinh tich
		tich *= arr[i];
	}
	//In ra tich
	cout << "Tich cac phan tu cua mang la: " << tich << endl;
	return 0;
}
