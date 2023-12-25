#include <iostream>
using namespace std;

//function nhap
long int nhap(){
	long int doanhSo;
	cin >> doanhSo;
	return doanhSo;
}
//function tinh
void tinh(long int doanhSo){
	//khai bao hoa hong
	long int hoaHong;
	//Tinh
	if(doanhSo <= 100000000){
		hoaHong = doanhSo * 0.05;
	} else if(doanhSo <= 300000000){
		hoaHong = doanhSo * 0.07;
	} else {
		hoaHong = doanhSo * 0.1;
	}
	//In ra ket qua
	cout << "Hoa hong nhan duoc: " << hoaHong << endl;
}
int main(){
	//Khai bao doanh so
	cout << "Doanh so: ";
	long int doanhSo = nhap();
	//Goi function tinh
	tinh(doanhSo);
	return 0;
}
