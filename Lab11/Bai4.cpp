#include <iostream>
using namespace std;

int GTBT = 11000000;
//Function nhap
int nhap(){
	int n;
	cin >> n;
	return n;
}
//Function tinh BHBB
int tinhBHBB(int LDBH){
	int BHBB = LDBH * 0.08 + LDBH * 0.15 + LDBH * 0.1;
	return BHBB;
}
//function tinh TNTT
int tinhTNTT(int TNHT, int SNPT, int LDBH){
	//Khai bao BHBB va gan gia tri bang gia tri tra ve tu function
	int BHBB = tinhBHBB(LDBH);
	//Tinh TNTT
	int TNTT = TNHT - BHBB - GTBT - SNPT * 4400000;
	//Tra ve TNTT
	return TNTT;
}
//Function tinh TTNCN
void tinhTTNCN(int TNHT, int SNPT, int LDBH){
	//Khai bao TTNCN
	int TTNCN;
	//Khai bao TNTT
	int TNTT = tinhTNTT(TNHT, SNPT, LDBH);
	if(TNTT <= 5000000){
		TTNCN = TNTT * 0.05;
	} else if(TNTT <= 10000000){
		TTNCN = TNTT * 0.1 - 250000;
	} else if(TNTT <= 18000000){
		TTNCN = TNTT * 0.15 - 750000;
	} else if(TNTT <= 32000000){
		TTNCN = TNTT * 0.2 - 1650000;
	} else if(TNTT <= 52000000){
		TTNCN = TNTT * 0.25 - 3250000;
	} else if(TNTT <= 80000000){
		TTNCN = TNTT * 0.3 - 5850000;
	} else {
		TTNCN = TNTT * 0.35 - 9850000;
	}
}
int main(){
	//Khai bao TNHT
	cout << "Thu nhap hang thang: ";
	int TNHT = nhap();
	//Khai bao SNPT
	cout << "So nguoi phu thuoc: ";
	int SNPT = nhap();
	//Khai bao LDBH
	cout << "Luong dong bao hiem: ";
	int LDBH = nhap();
	//Goi function tinh TTNCN
	tinhTTNCN(TNHT, SNPT, LDBH);
	return 0;
}
