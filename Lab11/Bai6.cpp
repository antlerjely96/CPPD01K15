#include <iostream>
using namespace std;

//Function nhap
int nhap(){
	int n;
	cin >> n;
	return n;
}
//Function kiem tra
void kiemTra(int x){
	for(int i = 0; i <= x; i++){
		if(i % 3 == 0){
			cout << i << "\t";
		}
	}
}
int main(){
	//Khai bao x
	int x = nhap();
	//Goi function kiem tra
	kiemTra(x);
	return 0;
}
