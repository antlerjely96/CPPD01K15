#include <iostream>
using namespace std;

int main(){
	//Khai bao 2 bien doanhSo, hoaHong
	int doanhSo, hoaHong;
	//Nhap doanhSo
	cout << "Nhap doanh so";
	cin >> doanhSo;
	//Kiem tra doanh so va tinh hoa hong
	if(doanhSo <= 100000000){
		//Neu dieu kien doanhSo <= 100000000 tra ve true
		hoaHong = doanhSo * 0.05;
	} else if(doanhSo <= 300000000){
		//Neu dieu kien doanhSo <= 100000000 sai va doanhSo <= 300000000 dung
		hoaHong = doanhSo * 0.07;
	} else {
		//Neu ca 2 dieu kien o tren sai
		hoaHong = doanhSo * 0.1;
	}
	//In ra hoa hong tinh duoc
	cout << "Hoa hong nhan duoc: " << hoaHong << endl;
	return 0;
}
