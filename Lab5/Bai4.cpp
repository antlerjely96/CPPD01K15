#include <iostream>
using namespace std;

int main(){
	//Khai bao n
	int n;
	//Vong lap do - while de nhap n
	do {
		//Nhap n
		cout << "n = ";
		cin >> n;
	} while (n < 0);
	//Kiem tra n < 2 khong
	if(n < 2){
		//Neu n < 2 dung
		cout << "Khong co so nguyen to trong khoang tu 2 den n" << endl;
	} else {
		//Khai bao i = 2
		int i = 2;
		//Chay vong lap tu i = 2 den i < n
		for(i = 2; i < n; i++){
			//Khai bao j = 2, dem = 0
			int j = 2, dem = 0;
			//Vong lap chay tu j = 2 den j < i
			for(j = 2; j < i; j++){
				//Kiem tra i co chia het cho j khong
				if(i % j == 0){
					//Neu i chia het cho j
					dem++;
				}
			}
			//Kiem tra dem == 0 khong
			if(dem == 0){
				//Neu dem == 0
				cout << i << endl;
			}
		}
		
	}
	return 0;
}
