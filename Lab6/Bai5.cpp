#include <iostream>
using namespace std;

int main(){
	//Khai báo n
	int n;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Khai bao mang
	float arr[n];
	//Chay vong lap tu 0 den n - 1 de nhap mang
	for(int i = 0; i < n; i++){
		//Nhap phan tu hien tai cua mang
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Khai bao temp
	int temp;
	//Chay vong lap i tu 0 den n - 2
	for(int i = 0; i < n - 1; i++){
		//Chay vong lap j tu i + 1 den n - 1
		for(int j = i + 1; j < n; j++){
			//Kiem tra neu phan tu thu i > phan tu thu j thi doi cho
			if(arr[i] > arr[j]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	cout << "Mang sau khi sap xep tang dan: " << endl;
	//Hien thi mang sau khi sap xep
	for(int i = 0; i < n; i++){
		cout << arr[i] << "\t";
	}
	return 0;
}
