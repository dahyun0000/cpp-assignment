#include <iostream>
using namespace std;

int main() {
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
	int menu = 0, servings = 0;
	while (true) {
		cout << "짬봉:1, 짜장:2, 군만두:3, 종료:4>> ";
		cin >> menu;
		if (menu == 1) {
			cout << "몇인분?";
			cin >> servings;
			cout << "짬뽕 " << servings << "인분 나왔습니다" << endl;
		}
		else if (menu == 2) {
			cout << "몇인분?";
			cin >> servings;
			cout << "짜장 " << servings << "인분 나왔습니다" << endl;
		}
		else if (menu == 3) {
			cout << "몇인분?";
			cin >> servings;
			cout << "군만두 " << servings << "인분 나왔습니다" << endl;
		}
		else if (menu ==4) {
			cout << "오늘 영업은 끝났습니다."<< endl;
			break;
		}
		else {
			cout << "다시 주문하세요!!" << endl;

		}

	}
	return 0;
}