#include <iostream>
using namespace std;

int main() {
	char op;
	int a, b, res;

	while (true) {
		cout << "? ";
		cin >> a >> op >> b;

		switch (op)    //�ش� �������� ���� �̵��Ѵ�.
		{
		case'+':
			res = a + b;
			break;
		case '-':
			res = a - b;
			break;
		case '*':
			res = a * b;
			break;
		case '/':
			res = a / b;
			break;
		case'%':
			res = a % b;
			break;
		default:    // �ƹ� �͵� �ش���� ���� ��
				break;
		}
		cout << a << " " << op << " " << b << "= " << res << endl;

	}
	return 0;
}