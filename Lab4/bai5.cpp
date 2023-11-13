#include <iostream>
using namespace std;

int main(){
	//Khai bao n
	int n;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//khai bao bat dau vong lap
	int i = 1;
	//vong lap
	for(i = 1; i <= n; i++){
		//Kiem tra n % i == 0 hay khong
		if(n % i == 0){
			//in ra i
			cout << i << endl;
		}
	}
	return 0;
}
