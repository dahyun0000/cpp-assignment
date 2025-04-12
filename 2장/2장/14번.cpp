#include <iostream>
using namespace std;

int main() {
	char menu[100];
	int num = 0;
	int E = 2000;
	int A = 2300;
	int C = 2500;
	int total = 0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	while (true) {
		cout << "주문>> ";
		cin >> menu >> num;

		if (strcmp(menu, "에스프레소") == 0) {
			total += E * num;
			cout << E * num << "원입니다. 맛있게 드세요" << endl;

		}
		else if (strcmp(menu, "아메리카노") == 0) {
			total += A * num;
			cout << A * num << "원입니다. 맛있게 드세요" << endl;

		}
		else if (strcmp(menu, "카푸치노") == 0) {
			total += C * num;
			cout << C * num << "원입니다. 맛있게 드세요" << endl;

		}
		if (total >= 20000) break;

		}
	cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
	return 0;
	}
