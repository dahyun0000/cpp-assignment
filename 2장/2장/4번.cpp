#include <iostream>
using namespace std;

int main() {
	cout << "5���� �Ǽ��� �Է��϶�";
	double a[5];
	double max = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i] ;
		if (a[i] > max) {
			max = a[i]; //������ ���� max������ ũ�ٸ� ������Ʈ����
		}
	}
	cout << "���� ū �� = " << max;
	return 0;
}