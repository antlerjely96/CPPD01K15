#include <iostream>
using namspace std;

int main(){
	//Khai bao n, giaiThua = 1
	int n, giaiThua = 1;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Kiem tra n
	if(n < 0){
		//Thuc hien neu n < 0 dung
		cout << "Khong tinh duoc n!" << endl;
	} else if(n == 0){
		//Thuc hien khi n < 0 sai, n == 0 dung
		giaiThua = 1;
		cout << "n! = " << giaiThua << endl;
	}
	return 0;
}
