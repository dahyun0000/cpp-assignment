#include <iostream>
using namespace std;
int main() {
	char text[100];
	int count=0;
	cout << "문자들을 입력하라(100개 미만)";
	cin.getline(text, 100);
	for (int i = 0; i <= sizeof(text); i++) {
		if (text[i] == 'x') {
			count++;
		}
	}
	cout << "x의 개수는 " << count;
	return 0;

}