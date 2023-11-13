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
	} else {
		//Thuc hien khi cac dieu kien tren sai
		//Tao thoi diem bat dau
		int i = 1;
		//Chay vong lap i chay tu 1 den <= n
		for(i = 1; i <= n; i++){
			giaiThua *= i;
		}
		//In ra giai thua
		cout << "n! = " << giaiThua << endl;
	}
	return 0;
}
