#include <iostream>
using namespace std;

int main() {
	// Khoi tao bien n	
	int n;
	// Nhap vao n
	cout << "n = ";
	cin >> n;
	// Khoi tao bien dem i voi gia tri la 0
	int i = 0;
	//Khoi tao st1 va st2
	int so1 = 0, so2 = 1, tong;
	if(n == 1){
		cout << so1 << "\t";
	} else if(n == 2){
		cout << so1 << "\t" << so2;
	} else {
		cout << so1 << "\t" << so2 << "\t";
		//Vong lap for bat dau tu 2 den i < n
		for (i = 2; i < n; i++) {
			tong = so1 + so2;
			so1 = so2;
			so2 = tong;
			cout << tong << "\t";
		}
	}
	
	
}
