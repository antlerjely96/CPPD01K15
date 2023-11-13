#include <iostream>
using namespace std;

int main(){
	//Khai bao n
	int n;
	do {
		//Nhap n
		cout << "n = ";
		cin >> n;
	} while (n < 0);
	//Kiem tra n
	if(n < 2){
		cout << "n khong phai so nguyen to" << endl;
	} else {
		//Khai bao dem = 0, i = 2
		int dem = 0, i = 2;
		//Vong lap i chay tu 2 den n
		for(i = 2; i < n; i++){
			//Kiem tra n co chia het cho i khong
			if(n % i == 0){
				//Neu n chia het cho i thi dem++
				dem++;
			}
		}
		//Kiem tra dem == 0 khong
		if(dem == 0){
			cout << "n la so nguyen to" << endl;
		} else {
			cout << "n khong phai so nguyen to" << endl;
		}
	}
	return 0;
}
