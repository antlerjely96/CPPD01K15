#include <iostream>
using namespace std;

int main(){
	//Khai bao i = 1
	int i = 1;
	//Chay vong lap tu i = 1 den i <= 5
	for(i = 1; i <= 5; i++){
		//Khai bao j = 1
		int j = 1;
		//Chay vong lap tu j = 1 den j <= i
		for(j = 1; j <= i; j++){
			cout << "* ";
		}
		//Xuong dong
		cout << endl;
	}
	//Khai bao a = 1
	int a = 1;
	//Chay vong lap tu a = 1 den a <= 5
	for(a = 1; a <= 5; a++){
		//Khai bao b = 5
		int b = 5;
		//Chay vong lap tu b = 5 den b >= a
		for(b = 5; b >= a; b--){
			cout << "* ";
		}
		//Xuong dong
		cout << endl;
	}
	return 0;
}
