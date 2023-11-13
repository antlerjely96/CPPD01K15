#include <iostream>
using namespace std;

int main(){
	//Khai bao i = 1, dem = 1
	int i = 1, dem = 1;
	//Chay vong lap tu i = 1 den i <= 5
	for(i = 1; i <= 5; i++){
		//Khai bao j = 1
		int j = 1;
		//Chay vong lap tu j = 1 den j <= i
		for(j = 1; j <= i; j++){
			cout << dem << "\t";
			dem++;
		}
		//Xuong dong
		cout << endl;
	}
	return 0;
}
