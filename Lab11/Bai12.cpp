#include<iostream>
using namespace std;

int global_variable = 100;

void ve(){
	cout << global_variable << endl;
	for(int i = 1; i < 7; i++){
		for(int j = 1; j < 7; j++){
			if(i == 1 || i == 6 || j == 1 || j == 6){
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
}
int main(){
	ve();
	return 0;
}
