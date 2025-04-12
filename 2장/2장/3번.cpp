#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	cout << "두 수를 입력하라>>";
	cin >> a >> b;
	cout << "큰 수= " << (a > b ? a : b);
	return 0;

}