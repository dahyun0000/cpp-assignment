#include <iostream>
using namespace std;

int main() {
	cout << "�� ��ȣ�� �Է��ϼ���>> ";
	char password[100];
	cin.getline(password, 100);
	
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ��� >> ";
	char password1[100];
	cin.getline(password1, 100);

	if (strcmp(password, password1) == 0) {
		cout << "�����ϴ�."; \
	}
	else
		cout << "Ʋ���ϴ�. ";
	return 0;

}