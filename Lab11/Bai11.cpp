#include <iostream>
using namespace std;

//function ve
void ve(){
	for(int i = 1; i < 6; i++){
		for(int j = 1; j <= i; j++){
			cout << j << " ";
		}
		cout << endl;
	}
}
int main(){
	ve();
	return 0;
}
