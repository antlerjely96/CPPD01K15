//Nhap 1 so nguyen a tu ban phim. Kiem tra
//Neu a > 0 thi kiem tra
//		neu a % 2 == 0 thi hien thi "a la so nguyen duong chan"
//		con lai thi hien thi "a la so nguyen duong le"
//Con neu a < 0 thi hien thi "a la so nguyen am"
//Con lai thi hien thi "a la so nguyen khong am khong duong"

#include <iostream>
using namespace std;

int main(){
	//Khai bao a
	int a;
	//Hien thi "a = "
	cout << "a = ";
	//Nhap a
	cin >> a;
	//Kiem tra dieu kien 1: a > 0
	//Neu dieu kien 1 sai thi kiem tra dieu kiem 3: a < 0
	if(a > 0){
		//Kiem tra dieu kien 2: a % 2 == 0 khi dieu kien 1 dung
		if(a % 2 == 0){
			//Hien thi "a la so nguyen duong chan" khi dieu kien 2 dung
			cout << "a la so nguyen duong chan";
		} else {
			//Hien thi "a la so nguyen duong le" khi dieu kien 2 sai
			cout << "a la so nguyen duong le";
		}
	} else if(a < 0){
		//Hien thi "a la so nguyen am" khi dieu kien 1 sai, dieu kien 3 dung
		cout << "a la so nguyen am";
	} else {
		//Hien thi "a la so nguyen khong am khong duong" khi dieu kien 1, 3 sai
		cout << "a la so nguyen khong am khong duong";
	}
	return 0;
}
