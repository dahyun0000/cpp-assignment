#include <iostream>
using namespace std;

int main() {
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;
	int menu = 0, servings = 0;
	while (true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		cin >> menu;
		if (menu == 1) {
			cout << "���κ�?";
			cin >> servings;
			cout << "«�� " << servings << "�κ� ���Խ��ϴ�" << endl;
		}
		else if (menu == 2) {
			cout << "���κ�?";
			cin >> servings;
			cout << "¥�� " << servings << "�κ� ���Խ��ϴ�" << endl;
		}
		else if (menu == 3) {
			cout << "���κ�?";
			cin >> servings;
			cout << "������ " << servings << "�κ� ���Խ��ϴ�" << endl;
		}
		else if (menu ==4) {
			cout << "���� ������ �������ϴ�."<< endl;
			break;
		}
		else {
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;

		}

	}
	return 0;
}