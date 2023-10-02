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
	//Kiem tra dieu kien 1: a > b
	if(a > b){
		//Kiem tra dieu kien 2: a > c khi dieu kien 1 dung
		if(a > c){
			//Thuc hien khi dieu kien 1, 2 dung
			cout << "max = " << a;
		} else {
			//Thuc hien khi dieu kien 1 dung, dieu kien 2 sai
			cout << "max = " << c;
		}
	} else {
		//Kiem tra dieu kien 3: b > c khi dieu kien 1 sai
		if(b > c){
			//Thuc hien khi dieu kien 1 sai, dieu kien 3 dung
			cout << "max = " << b;
		} else {
			//Thuc hien khi dieu kien 1 sai, dieu kien 3 sai
			cout << "max = " << c;
		}
	}
	return 0;
}
