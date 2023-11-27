#include <iostream>
using namespace std;

int main(){
	//Khai bao chuoi theo string
	string str1;
	string str2;
	//Nhap chuoi
	getline(cin, str1);
	getline(cin, str2);
	//In ra chuoi
	cout << str1 << endl;
	cout << str2 << endl;
	//Lay do dai cua chuoi
	cout << "Do dai cua chuoi 1: " << str1.length() << endl;
	cout << "Do dai cua chuoi 2: " << str2.length() << endl;
	//Gán str1 vao str2
	str2 = str1;
	//Noi chuoi 2 vao chuoi 1
	str1 = str1 + str2;
	cout << str1 << endl;
	//So sanh 2 chuoi voi nhau
	if(str1.compare(str2) > 0){
		cout << "chuoi 1 > chuoi 2";
	} else if(str1.compare(str2) < 0){
		cout << "chuoi 1 < chuoi 2";
	} else {
		cout << "chuoi 1 = chuoi 2";
	}
	return 0;
}
