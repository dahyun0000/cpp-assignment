#include <iostream>
using namespace std;

int main() {
	cout << "5���� �̸���';'���� �����Ͽ� �Է��ϼ���.>> " << endl;
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
	cout << "���� �� �̸�" << Lname;
	return 0;
}