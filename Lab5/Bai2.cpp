#include <iostream>
using namespace std;

int main(){
	//Khai bao n, i = 1
	int n, i = 1;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Khai bao bien dem de luu so luong so chia het cho 7
	int dem = 0;
	//Vong lap tu 1 den n
	for(i = 1; i < n; i++){
		//Kiem tra i co chia het cho 7 hay khong
		if(i % 7 == 0){
			//Tang dem len 1 don vi
			dem++;
		}
	}
	//In ra ket qua
	cout << "Tu 1 den " << n << " co " << dem << " so chia het cho 7" << endl;
	return 0;
}
