#include <iostream>
using namespace std;

int main() {
	cout << "새 암호를 입력하세요>> ";
	char password[100];
	cin.getline(password, 100);
	
	cout << "새 암호를 다시 한 번 입력하세요 >> ";
	char password1[100];
	cin.getline(password1, 100);

	if (strcmp(password, password1) == 0) {
		cout << "같습니다."; \
	}
	else
		cout << "틀립니다. ";
	return 0;

}