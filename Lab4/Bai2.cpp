#include <iostream>
using namespace std;

int main(){
	//Khai bao x, i = 1
	int x, i = 1;
	//Nhap x
	cout << "x = ";
	cin >> x;
	//Chay vong lap tu 1 den x
	for(i = 1; i < x; i++){
		//Kiem tra i co chia het cho 3 khong
		if(i % 3 == 0){
			//In ra i
			cout << i << endl;
		}
	}
	return 0;
}
