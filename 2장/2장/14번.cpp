#include <iostream>
using namespace std;

int main() {
	char menu[100];
	int num = 0;
	int E = 2000;
	int A = 2300;
	int C = 2500;
	int total = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
	while (true) {
		cout << "�ֹ�>> ";
		cin >> menu >> num;

		if (strcmp(menu, "����������") == 0) {
			total += E * num;
			cout << E * num << "���Դϴ�. ���ְ� �弼��" << endl;

		}
		else if (strcmp(menu, "�Ƹ޸�ī��") == 0) {
			total += A * num;
			cout << A * num << "���Դϴ�. ���ְ� �弼��" << endl;

		}
		else if (strcmp(menu, "īǪġ��") == 0) {
			total += C * num;
			cout << C * num << "���Դϴ�. ���ְ� �弼��" << endl;

		}
		if (total >= 20000) break;

		}
	cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;
	return 0;
	}
