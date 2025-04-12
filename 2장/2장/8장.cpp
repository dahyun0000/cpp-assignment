#include <iostream>
using namespace std;

int main() {
	cout << "5명의 이름을';'으로 구분하여 입력하세요.>> " << endl;
	char name[100];
	string Lname;
	int max = 0;
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << ":" << name << endl;
		if (max < strlen(name)) {
			max = strlen(name);
			Lname = name;

		}
	}
	cout << "가장 긴 이름" << Lname;
	return 0;
}