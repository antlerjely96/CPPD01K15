#include <iostream>
using namespace std;

int main(){
	//Khai bao a
	int a;
	//Hien thi "a = "
	cout << "a = ";
	//Nhap a
	cin >> a;
	//Kiem tra dieu kien a >= 0
	if(a >= 0){
		//Thuc hien khi dieu kien dung
		cout << "|a| = " << a;
	} else {
		//Thuc hien khi dieu kien sai
		cout << "|a| = " << a * (-1);
	}
	return 0;
}
