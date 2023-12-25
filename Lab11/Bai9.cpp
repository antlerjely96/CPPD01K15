#include<iostream>
using namespace std;

//Function nhap
int nhap(){
	int n;
	cin >> n;
	return n;
}
void timUoc(int n){
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			cout << i << "\t";
		}
	}
}
int main(){
	//Khai bao n
	int n = nhap();
	//Goi function timUoc
	timUoc(n);
	return 0;
}
