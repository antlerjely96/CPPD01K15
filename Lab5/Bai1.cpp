#include <iostream>
using namespace std;

int main(){
	//Khai bao
	int n, tong = 0;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Khai bao bat dau vong lap
	int i = 1;
	//Vong lap bat dau tu 1 den n de tinh tong cac so chan
	for(i = 1; i < n; i++){
		//Kiem tra i co phai so chan hay khong
		if(i % 2 == 0){
			//tinh tong cua i va tong
			tong += i;
		}
	}
	//In ra ket qua
	cout << "Tong cac so chan trong khoang tu 1 den n la: " << tong << endl;
	return 0;
}
