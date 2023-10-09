#include <iostream>
#include <cmath>
using namespace std;

int main(){
	//Khai bao a, b, x
	double a, b, x;
	//Nhap a
	cout << "a = ";
	cin >> a;
	//Nhap b
	cout << "b = ";
	cin >> b;
	//Kiem tra a va b
	if(a > 0 && b > 0){
		//tinh x
		x = -b / a;
	} else if (a > 0 && b < 0){
		//Tinh x
		x = -a;
	} else if(a < 0 && b < 0){
		//Tinh x
		x = (-(pow(a, 2) + pow(b, 2)) * (a - b)) * a;
	} else if (a == 0 || b == 0){
		//Tinh x
		x = -(a + b);
	}
	//In ra x
	cout << "x = " << x << endl;
	return 0;
}
