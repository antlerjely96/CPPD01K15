#include <iostream>
using namespace std;

int main(){
	//Khai bao n
	int n;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Khai bao mang
	int arr[n];
	//Chay vong lap tu 0 den n - 1 de nhap mang
	for(int i = 0; i < n; i++){
		//Nhap phan tu thu i cua mang
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Khai bao tong
	int tong = 0;
	//Chay vong lap tu 0 den n - 1 de tinh tong cac phan tu co gia tri chan trong mang
	for(int i = 0; i < n; i++){
		//Kiem tra arr[i] co chia het cho 2 khong
		if(arr[i] % 2 == 0){
			//Tinh tong
			tong += arr[i];
		}
	}
	//In ra ket qua
	cout << "Tong cac phan tu co gia tri chan trong mang la: " << tong << endl;
	return 0;
}
