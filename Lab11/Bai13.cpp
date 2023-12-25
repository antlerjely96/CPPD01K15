#include <iostream>
using namespace std;
//Function nhap
int nhap(){
	int n;
	cin >> n;
	return n;
}
//Function kiem tra so nguyen to
int soNguyenTo(int n){
	int dem = 0;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			dem++;
		}
	}
	return dem;
}
//function hienThi
void hienThiNLaSoNguyenToHayKhong(int n){
	int dem = soNguyenTo(n);
	//Kiem tra dem
	if(dem == 0){
		cout << n << " la so nguyen to" << endl;
	} else {
		cout << n << " khong la so nguyen to" << endl;
	}
}
//function hien thi cac so nguyen to tu 1 den n
void soNguyenToTu1DenN(int n){
	int dem = 0;
	for(int i = 2; i < n; i++){
		dem = soNguyenTo(i);
		if(dem == 0){
			cout << i << " \t";
		}	
	}
	cout << endl;
}

int main(){
	//Khai bao n
	cout << "n = ";
	int n = nhap();
	//goi function so nguyen to
	hienThiNLaSoNguyenToHayKhong(n);
	//goi function hien thi so nguyen to tu 1 den n
	soNguyenToTu1DenN(n);
	return 0;
}
