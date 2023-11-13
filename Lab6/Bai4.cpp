#include <iostream>
using namespace std;

int main(){
	//Khai bao n
	int n;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Khai bao mang
	float arr[n];
	//Chay vong lap tu 0 den n - 1 de nhap mang
	for(int i = 0; i < n; i++){
		//Nhap phan tu thu i
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Khai bao max va gan max bang phan tu dau tien cua mang
	float max = arr[0];
	//Chay vong lap tu 0 den n - 1 den tim max
	for(int i = 0; i < n; i++){
		//Kiem tra xem max hien tai co nho hon phan tu hien tai cua mang khong
		if(max < arr[i]){
			//Gan max bang phan tu hien tai cua mang
			max = arr[i];
		}
	}
	//In ra max
	cout << "Phan tu lon nhat cua mang la: " << max << endl;
	//Khai bao min va gan min bang phan tu dau tien cua mang
	float min = arr[0];
	//Chay vong lap tu 0 den n - 1 de tim min
	for(int i = 0; i < n; i++){
		//Kiem tra min hien tai co lon hon phan tu hien tai cua mang
		if(min > arr[i]){
			//Gan min = arr[i]
			min = arr[i];
		}
	}
	//In ra min
	cout << "Phan tu nho nhat cua mang la: " << min << endl;
	return 0;
}
