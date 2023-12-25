#include <iostream>
using namespace std;

//Function nhap
int nhap(){
	int n;
	cin >> n;
	return n;
}
//function tinh giai thua
int tinhGiaiThua(int n){
	if(n == 0){
		return 1;
	}
	return n * tinhGiaiThua(n - 1);
}
int main(){
	//Khai bao n
	int n = nhap();
	//Goi function tinh giai thua
	cout << "n! = " << tinhGiaiThua(n) << endl;
	return 0;
}
