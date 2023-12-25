#include <iostream>
using namespace std;

//function nhap
int nhap(){
	int n;
	cin >> n;
	return n;
}
//function kiem tra
void kiemTra(int n){
	switch(n){
		case 2:
			cout << "Monday" << endl;
			break;
		case 3:
			cout << "Tuesday" << endl;
			break;
		case 4:
			cout << "Wednesday" << endl;
			break;
		case 5:
			cout << "Thursday" << endl;
			break;
		case 6:
			cout << "Friday" << endl;
			break;
		case 7:
			cout << "Saturday" << endl;
			break;
		case 8:
			cout << "Sunday" << endl;
			break;
		default:
			cout << "Incorrect input" << endl;
			break;
	}
}
int main(){
	//Khai bao n va gan gia tri bang gia tri tra ve tu function
	cout << "Input n: ";
	int n = nhap();
	//Goi function kiem tra
	kiemTra(n);
	return 0;
}
