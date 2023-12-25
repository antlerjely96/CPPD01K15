#include <iostream>
using namespace std;
//function nhap
int nhap(){
	int a;
	cin >> a;
	return a;
}
//Function tinh ngay
void tinhNgay(int thang, int nam){
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "Thang " << thang << " nam " << nam << " co 31 ngay";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "Thang " << thang << " nam " << nam << " co 30 ngay" << endl;
			break;
		case 2:
			if(nam % 4 == 0){
				cout << "Thang " << thang << " nam " << nam << " co 29 ngay" endl;
				break;
			} else {
				cout << "Thang " << thang << " nam " << nam << " co 28 ngay" endl;
				break;
			}
		default:
			cout << "Khong ton tai thang " << thang << " nam " << nam << endl;											
	}
}
int main(){
	//Khai bao thang
	cout << "Thang: ";
	int thang = nhap();
	//Khai bao nam
	cout << "Nam: ";
	int nam = nhap();
	//Goi function tinh ngay
	tinhNgay(thang, nam);
	return 0;
}
