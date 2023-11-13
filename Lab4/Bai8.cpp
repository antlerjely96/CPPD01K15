#include <iostream>
using namespace std;

int main(){
	//Khai bao
	int i = 1, j;
	//Vong lap chay theo chieu doc
	for(i = 1; i <= 6; i++){
		//Vong lap de in ra trong tung dong
		for(j = 1; j <= 6; j++){
			//Kiem tra i va j
			if(i == 1 || i == 6 || j == 1 || j == 6){
				//In ra dau *
				cout << "*";
			} else {
				cout << " ";
			}
		}
		//Xuong dong khi in het 1 dong
		cout << endl;
	}
	return 0;
}
