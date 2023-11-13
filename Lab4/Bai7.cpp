#include <iostream>
using namespace std;

int main(){
	//Khai bao i, j
	int i = 1, j;
	//vong lap in ra cac dong
	for(i = 1; i < 6; i++){
		//Vong lap in ra cac so trong 1 dong
		for(j = 1; j <= i; j++){
			cout << j << "\t";
		}
		cout << endl;
	}
	return 0;
}
