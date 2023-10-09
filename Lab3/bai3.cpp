#include <iostream>
using namespace std;

int main(){
	//Khai bao a
	int a;
	//Nhap a
	cout << "Nhap so: ";
	cin >> a;
	//Kiem tra a la ngay thu may
	if(a == 2){
		cout << "Monday" << endl;
	} else if(a == 3){
		cout << "Tuesday" << endl;
	} else if(a == 4){
		cout << "Wednesday" << end;
	} else if(a == 5){
		cout << "Thursday" << endl;
	} else if(a == 6){
		cout << "Friday" << endl;
	} else if (a == 7){
		cout << "Saturday" << endl;
	} else if(a == 8){
		cout << "Sunday" << endl;
	} else {
		cout << "Invalid value";
	}
	
	//C2: switch - case
	switch(a){
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
			cout << "Invalid value!" << endl;
			break;
	}
	return 0;
}
