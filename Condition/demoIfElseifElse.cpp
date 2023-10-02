//Nhap 1 so a tu ban phim. Kiem tra a: 
// Neu a > 0 thi in ra "a la so duong"
// Con neu a < 0 thi in ra "a la so am"
// Con lai thi in ra "a la so khong am khong duong"
#include <iostream>
using namespace std;

int main(){
	//Khai bao bien a
	int a;
	//In ra dong chu "a = "
	cout << "a = ";
	//Nhap bien a
	cin >> a;
	//Kiem tra dieu kien 1: a > 0 hay khong
	//Neu dieu kien 1 sai thi kiem tra dieu kien 2: a < 0
	if(a > 0){
		//Thuc hien khi dieu kien dung
		cout << "a la so duong";
	} else if(a < 0){
		//Thuc hien khi dieu kien 1 sai, dieu kien 2 dung
		cout << "a la so am";
	} else {
		//Thuc hien khi tat ca cac dieu kien ben tren sai
		cout << "a khong am khong duong";
	}
	return 0;
}
