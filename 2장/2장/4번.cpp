#include <iostream>
using namespace std;

int main() {
	cout << "5개의 실수를 입력하라";
	double a[5];
	double max = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i] ;
		if (a[i] > max) {
			max = a[i]; //현재의 값이 max보ㄹ다 크다면 업데이트해줘
		}
	}
	cout << "제일 큰 수 = " << max;
	return 0;
}