#include <iostream>
using namespace std;

int main() {
	while (true) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>> ";
		char text[100];
		cin.getline(text, 100);

		if (strcmp(text, "yes") == 0) {
			cout << "�����մϴ� . . ";
			break;
		}
	}
	return 0;
}