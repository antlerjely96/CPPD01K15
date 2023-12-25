#include <iostream>
using namespace std;
//function nhap
int nhap(){
	int a;
	cin >> a;
	return a;
}
//Function kiem tra
void kiemTra(int a){
	if(a > 0){
		cout << "a la so duong" << endl;
	} else if(a < 0) {
		cout << "a la so am" << endl;
	} else {
		cout << "a khong am khong duong" << endl;
	}
}
int main(){
	//Khai bao bien a va gan cho a gia tri duoc tra ve tu function
	int a = nhap();
	//Goi function kiem tra
	kiemTra(a);
	return 0;
}
