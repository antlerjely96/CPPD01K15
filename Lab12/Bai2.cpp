#include <iostream>
using namespace std;

//Nhap mang
float* nhapMang(){
	float arr[5];
	for(int i = 0; i < 5; i++){
		cout << "arr[" << i <<"] = ";
		cin >> arr[i];
	}
	float* ptr = arr;
	return ptr;
}

void tinhTich(float* ptr){
	float tich = 1;
	for(int i = 0; i < 5; i++){
		tich *= ptr[i];
	}
	cout << "Tich cac phan tu cua mang: " << tich << endl;
}
int main(){
	//Goi function nhap mang
	float* ptr = nhapMang();
	//Goi tinh tich
	tinhTich(ptr);
	return 0;
}
