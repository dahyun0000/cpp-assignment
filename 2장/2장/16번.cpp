#include <iostream>
using namespace std;

int main() {
    char ch;
    int alpha[26] = { 0 };  // 알파벳 개수 저장
    int total = 0;

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다. \n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다. " << endl;

    while (cin.get(ch)) {
        if (ch == ';') break;

        if (isalpha(ch)) {
            ch = tolower(ch);           // 소문자로 변환
            alpha[ch - 'a']++;          // 알파벳 개수 증가
            total++;
        }
    }

    cout << "\n총 알파벳 수 " << total << "\n";

    for (int i = 0; i < 26; i++) {
        cout << (char)(i + 'a') << " (" << alpha[i] << ") : ";
        for (int j = 0; j < alpha[i]; j++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}
