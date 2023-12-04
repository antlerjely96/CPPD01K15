#include <iostream>
using namespace std;

//Tao struct
struct HCN{
	int CD;
	int CR;
	int CV;
	int DT;
};

int main(){
	//Khai bao mang co 5 HCN
	HCN hcn[5];
	//Nhap thong tin cua 5 HCN
	for (int i = 0; i < 5; i++){
		cout << "Nhap vao thong tin HCN " << i + 1 << endl;
		//Nhap CD
		cout << "Chieu dai: ";
		cin >> hcn[i].CD;
		//Nhap CR
		cout << "Chieu rong: ";
		cin >> hcn[i].CR;
		//Tinh CV
		hcn[i].CV = (hcn[i].CD + hcn[i].CR) * 2;
		//Tinh DT
		hcn[i].DT = hcn[i].CD * hcn[i].CR;
	}
	cout << "___________________________" << endl;
	cout << "Thong tin 5 HCN "<< endl;
	//Hien thi thong tin 5 HCN
	for (int i = 0; i < 5; i++){
		cout << "Hinh chu nhat " << i + 1 << endl;
		cout << "Chieu dai: " << hcn[i].CD << endl;
		cout << "Chieu rong: " << hcn[i].CR << endl;
		cout << "Chu vi: " << hcn[i].CV << endl;
		cout << "Dien tich: " << hcn[i].DT << endl;
		cout << "_______________________" << endl;
	}
	return 0;
}
