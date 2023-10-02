//Nhap 1 so a tu ban phim. Kiem tra a > 0 hay khong, 
// Neu a > 0 thi in ra "a la so duong"
#include <iostream>
using namespace std;

int main(){
	//Khai bao bien a
	int a;
	//In ra dong chu "a = "
	cout << "a = ";
	//Nhap bien a
	cin >> a;
	//Kiem tra dieu kien a > 0 hay khong
	if(a > 0){
		//Thuc hien khi dieu kien dung
		cout << "a la so duong";
	}
	return 0;
}
