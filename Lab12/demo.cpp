#include <iostream>
using namespace std;
//Function tra ve con tro
int* nhapMang(int arr[]){
	cout << "Nhap mang: " << endl;
	for(int i = 0; i < 5; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Tao ra 1 con tro tro den mang
	int* arrPointer = arr;
	return arrPointer;
}
int main(){
	int number = 10;
	//Khai bao con tro numberPointer
	int* numberPointer;
	//Gan dia chi cua bien number vao con tro
	numberPointer = &number;
	//Gia tri cua con tro (dia chi cua bien)
	cout << numberPointer << endl;
	//Hien thi gia tri cua bien co dia chi duoc luu trong con tro
	cout << *numberPointer << endl;
	
	//Tao ra 1 mang
	int arr[5];
	//Tao ra 1 con tro de chua con tro duoc return ve
	int* arrPointer = nhapMang(arr);
	cout << arrPointer << endl;
	//Hien thi gia tri cua cac phan tu trong mang
	for(int i = 0; i < 5; i++){
		cout << "arr[" << i << "] = " << arrPointer[i] << endl;
	}
	//Hien thi gia tri cua cac phan tu trong mang
	for(int i = 0; i < 5; i++){
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	//Con tro kep => 1 con tro tro den dia chi cua 1 con tro khac
	int** addressNumberPointer = &numberPointer;
	cout << addressNumberPointer << endl;
	//Hien thi gia tri cua numberPointer thong qua addressNumberPointer
	cout << *addressNumberPointer << endl;
	//Hien thi gia tri cua bien number thong qua addressNumberPointer
	cout << **addressNumberPointer << endl;
}
