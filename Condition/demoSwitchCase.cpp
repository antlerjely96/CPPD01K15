//Nhap 1 so nguyen. Neu so nguyen do trong khoang tu 0 den 10
// thi hien thi so do viet bang chu
//Con lai thi hien thi "So vua nhap < 0 hoac > 10"

#include <iostream>
using namespace std;
int main(){
	//Khai bao a
	int a;
	//Hien thi "a = "
	cout << "a = ";
	//Nhap a
	cin >> a;

	switch(a){
		case 0:
			cout << "Khong";
			break;
		case 1:
			cout << "Mot";
			break;
		case 2:
			cout << "Hai";
			break;
		case 3:
			cout << "Ba";
			break;
		case 4:
			cout << "Bon";
			break;
		case 5:
			cout << "Nam";
			break;
		case 6:
			cout << "Sau";
			break;
		case 7:
			cout << "Bay";
			break;
		case 8:
			cout << "Tam";
			break;
		case 9:
			cout << "Chin";
			break;
		case 10:
			cout << "Muoi";
			break;
		default:
			cout << "a < 0 || a > 10";
			break;
	}
	return 0;
}
