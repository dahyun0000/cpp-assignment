#include <iostream>
using namespace std;
int main() {
	char text[100];
	int count=0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�)";
	cin.getline(text, 100);
	for (int i = 0; i <= sizeof(text); i++) {
		if (text[i] == 'x') {
			count++;
		}
	}
	cout << "x�� ������ " << count;
	return 0;

}