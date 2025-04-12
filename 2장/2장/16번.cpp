#include <iostream>
using namespace std;

int main() {
    char ch;
    int alpha[26] = { 0 };  // ���ĺ� ���� ����
    int total = 0;

    cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�. \n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�. " << endl;

    while (cin.get(ch)) {
        if (ch == ';') break;

        if (isalpha(ch)) {
            ch = tolower(ch);           // �ҹ��ڷ� ��ȯ
            alpha[ch - 'a']++;          // ���ĺ� ���� ����
            total++;
        }
    }

    cout << "\n�� ���ĺ� �� " << total << "\n";

    for (int i = 0; i < 26; i++) {
        cout << (char)(i + 'a') << " (" << alpha[i] << ") : ";
        for (int j = 0; j < alpha[i]; j++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}
