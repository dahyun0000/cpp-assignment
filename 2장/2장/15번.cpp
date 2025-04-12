#include <iostream>
using namespace std;

int main() {
	char op;
	int a, b, res;

	while (true) {
		cout << "? ";
		cin >> a >> op >> b;

		switch (op)    //해당 연산자의 경우로 이동한다.
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
		default:    // 아무 것도 해당되지 않을 때
				break;
		}
		cout << a << " " << op << " " << b << "= " << res << endl;

	}
	return 0;
}