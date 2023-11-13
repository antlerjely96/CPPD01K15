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
	//Khai bao max va gan max bang phan tu dau tien cua mang
	int max = arr[0];
	//Chay vong lap tu 0 den n - 1 den tim max
	for(int i = 0; i < n; i++){
		//Kiem tra max co nho hon phan tu hien tai hay khong
		if(max < arr[i]){
			max = arr[i];
		}
	}
	//Khai bao giaiThua = 1
	int giaiThua = 1;
	//Kiem tra max
	if(max < 0){
		cout << "Khong co max!" << endl;
	} else if(max == 0 || max == 1){
		giaiThua = 1;
		cout << "max! = " << giaiThua << endl;
	} else {
		//Chay vong lap tu 2 den n de tinh max!
		for(int i = 2; i <= max; i++){
			giaiThua *= i;
		}
		//Hien thi ket qua
		cout << "max! = " << giaiThua << endl;
	}
	return 0;
}
