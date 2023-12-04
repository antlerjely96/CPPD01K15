#include <iostream>
using namespace std;

//Tao struct
struct student{
	string id;
	string name;
	string className;
	double averageMark;
};

int main(){
	//Khai bao n
	int n;
	//Nhap n
	cout << "Number of student: ";
	cin >> n;
	//Khai bao mang co n sinh vien
	student stud[n];
	//Nhap thong tin cua n sinh vien
	for(int i = 0; i < n; i++){
		cout << "stud[" << i << "]: " << endl;
		cout << "Student id: ";
		cin.ignore();
		getline(cin, stud[i].id);
		cout << "Student name: ";
		getline(cin, stud[i].name);
		cout << "Class name: ";
		getline(cin, stud[i].className);
		cout << "Average Mark: ";
		cin >> stud[i].averageMark;
	}
	//Khai bao maxAverage va gan bang averageMark cua sv dau tien
	double maxAverage = stud[0].averageMark;
	//Tim diem trung binh lon nhat
	for(int i = 0; i < n; i++){
		if(maxAverage < stud[i].averageMark){
			maxAverage = stud[i].averageMark;
		}
	}
	//Hien thi thong tin cua sv co averageMark = maxAverage
	cout << "Student with max average mark: " << endl;
	for(int i = 0; i < n; i++){
		if(stud[i].averageMark == maxAverage){
			cout << "Student id: " << stud[i].id << endl;
			cout << "Student name: " << stud[i].name << endl;
			cout << "Class name: " << stud[i].className << endl;
			cout << "Average Mark: " << stud[i].averageMark << endl;
		}
	}
	//Khai bao minAverage va gan bang averageMark cua sv dau tien
	double minAverage = stud[0].averageMark;
	//Tim diem trung binh nho nhat
	for(int i = 0; i < n; i++){
		if(minAverage > stud[i].averageMark){
			minAverage = stud[i].averageMark;
		}
	}
	//Hien thi thong tin cua sv co averageMark = minAverage
	cout << "Student with min average mark: " << endl;
	for(int i = 0; i < n; i++){
		if(stud[i].averageMark == minAverage){
			cout << "Student id: " << stud[i].id << endl;
			cout << "Student name: " << stud[i].name << endl;
			cout << "Class name: " << stud[i].className << endl;
			cout << "Average Mark: " << stud[i].averageMark << endl;
		}
	}
	//Khai bao 1 bien temp co kieu du lieu la struct
	student temp;
	//Sap xep
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(stud[i].averageMark > stud[j].averageMark){
				//Gan temp = stud[i]
				temp.id = stud[i].id;
				temp.name = stud[i].name;
				temp.className = stud[i].className;
				temp.averageMark = stud[i].averageMark;
				//Gan stud[i] = stud[j]
				stud[i].id = stud[j].id;
				stud[i].name = stud[j].name;
				stud[i].className = stud[j].className;
				stud[i].averageMark = stud[j].averageMark;
				//Gan stud[j] = temp
				stud[j].id = temp.id;
				stud[j].name = temp.name;
				stud[j].className = temp.className;
				stud[j].averageMark = temp.averageMark;
			}
		}
	}
	//Hien thi thong tin cac sinh vien
	cout << "Student's List: " << endl;
	for(int i = 0; i < n; i++){
		if(stud[i].averageMark == minAverage){
			cout << "Student id: " << stud[i].id << endl;
			cout << "Student name: " << stud[i].name << endl;
			cout << "Class name: " << stud[i].className << endl;
			cout << "Average Mark: " << stud[i].averageMark << endl;
		}
	}
	return 0;
}
