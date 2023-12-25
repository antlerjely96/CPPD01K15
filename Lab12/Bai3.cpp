#include <iostream>
using namespace std;

//Nhap n
int nhapN(){
	int n;
	cin >> n;
	return n;
}
//Nhap mang
int* nhapMang(int n){
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i <<"] = ";
		cin >> arr[i];
	}
	int* ptr = arr;
	return ptr;
}
//tinh tong cac phan tu gia tri chan
void tinhTongChan(int* ptr, int n){
	int tong = 0;
	for(int i = 0; i < n; i++){
		if(ptr[i] % 2 == 0){
			tong += ptr[i];
		}
	}
	cout << "Tong cac phan tu chan cua mang: " << tong << endl;
}
int main(){
	//Khai bao n
	cout << "n = ";
	int n = nhapN();
	//Goi function nhap mang
	int* ptr = nhapMang(n);
	//Goi function tinh tong
	tinhTongChan(ptr, n);
	return 0;
}
