#include <iostream>
using namespace std;

int main() {
	while (true) {
		cout << "종료하고 싶으면 yes를 입력하세요>> ";
		char text[100];
		cin.getline(text, 100);

		if (strcmp(text, "yes") == 0) {
			cout << "종료합니다 . . ";
			break;
		}
	}
	return 0;
}