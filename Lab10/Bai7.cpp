#include <iostream>
using namespace std;

//function nhap
int nhap(){
	int a;
	cin >> a;
	return a;
}
//function tinh
void tinhGiaTriTuyetDoi(int n){
	if(n >= 0){
		cout << "|n| = " << n << endl;
	} else {
		cout << "|n| = " << n * (-1) << endl;
	}
}
int main(){
	//Khai bao a va gan gia tri bang gia tri tra ve cua function
	int a = nhap();
	//Goi function tinh gia tri tuyet doi
	tinhGiaTriTuyetDoi(a);
	return 0;
}
