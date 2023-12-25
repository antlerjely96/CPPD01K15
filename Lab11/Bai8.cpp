#include <iostream>
using namespace std;

//Function nhap
int nhap(){
	int n;
	cin >> n;
	return n;
}
//function tim day fibonacci
int fibonacci(int n){
	if(n < 0){
		return -1;
	} else if(n == 0 || n == 1){
		return n;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
//function hien thi
void hienThi(int n){
	for(int i = 0; i < n; i++){
		cout << fibonacci(i) << "\t";
	}
}
int main(){
	//Khai bao n
	int n = nhap();
	//Goi function hienThi
	hienThi(n);
	return 0;
}
