//Nhap 1 mang so nguyen co 10 phan tu. Hien thi cac phan tu cua mang
#include <iostream>
using namespace std;

int main(){
	//Khai bao 1 mang co 10 phan tu la cac so nguyen
	int arr[10];
	//Chay vong lap de nhap mang, vong lap se chay tu 0 den 9
	for(int i = 0; i < 10; i++){
		//Nhap cac phan tu cua mang
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << "Cac phan tu cua mang la: " << endl;
	//Chay vong lap de in mang, vong lap chay tu 0 den 9
	for(int i = 0; i < 10; i++){
		cout << arr[i] << endl;
	}
	return 0;
}
