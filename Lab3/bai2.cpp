#include <iostream>
using namespace std;

int main(){
	//Khai bao year
	int year;
	//Nhap year
	cout << "Nhap nam: ";
	cin >> year;
	//Kiem tra year % 4 == 0?
	if(year % 4 == 0){
		cout << "Nam nhuan" << endl;
	} else {
		cout << "Nam khong nhuan" << endl;
	}
	return 0;
}
