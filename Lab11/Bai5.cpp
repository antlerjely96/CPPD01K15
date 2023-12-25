#include <iostream>
using namespace std;

//Nhap n
int nhap(){
	int n;
	cin >> n;
	return n;
}
//tinh tong
void tinhTong(int n){
	//Khai bao tong
	int tong = 0;
	//vong lap voi i chay tu 1 den n
	for(int i = 1; i <= n; i++){
		tong += i;
	}
	//In ra ket qua
	cout << "Tong cac so tu 1 den n: " << tong << endl;
}
int main(){
	//Khai bao n
	int n = nhap();
	//Goi function tinh tong
	tinhTong(n);
	return 0;
}
