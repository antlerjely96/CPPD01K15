#include <iostream>
using namespace std;

int main(){
	//Khai bao a, b, c
	int a, b, c;
	//Hien thi "a = "
	cout << "a = ";
	//Nhap a
	cin >> a;
	//Hien thi "b = "
	cout << "b = ";
	//Nhap b
	cin >> b;
	//Hien thi "c = "
	cout << "c = ";
	//Nhap c
	cin >> c;
	//Kiem tra dieu kien 1: a > 0 && b > 0 && c > 0
	if (a > 0 && b > 0 && c > 0){
		//Kiem tra dieu kien 2: a + b > c && a + c > b && b + c > a khi dieu kien 1 dung
		if(a + b > c && a + c > b && b + c > a){
			//Thuc hien khi dieu kien 1, 2 dung
			cout << "a, b, c tao thanh tam giac";
		} else {
			//thuc hien khi dieu kien 1 dung, dieu kien 2 sai
			cout << "a, b, c khong tao thanh tam giac";
		}
	} else {
		//Thuc hien khi dieu kien 1 sai
		cout << "a, b, c khong tao thanh tam giac";
	}
	return 0;
}
