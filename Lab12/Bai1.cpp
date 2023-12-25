#include <iostream>
using namespace std;

//Nhap mang
int* nhapMang(int arr[]){
	cout << "Nhap mang: " << endl;
	for(int i = 0; i < 10; i++){
		cout << "arr[" << i <<"]= ";
		cin >> arr[i];
	}
	int* ptr = arr;
	return ptr;
}
//Tinh tong
void tinhTong(int arr[]){
	int tong = 0;
	for(int i = 0; i < 10; i++){
		tong += arr[i];
	}
	cout << "Tong cac phan tu trong mang: " << tong << endl;
}
int main(){
	int arr[10];
	int* ptr = nhapMang(arr);
	tinhTong(arr);
	return 0;
}
