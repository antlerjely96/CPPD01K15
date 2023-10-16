#include <iostream>
using namespace std;

int main(){
	//Khai bao n
	int n, tong = 0;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Khai bao va gan i = 0
	int i = 0;
	for(i = 0; i <= n; i++){
		tong += i;
	}
	//In ra tong
	cout << "Tong cac so tu 0 den n: " << tong << endl;
	return 0;
}
