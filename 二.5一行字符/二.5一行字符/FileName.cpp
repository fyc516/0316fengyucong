#include <iostream>
using namespace std;

int main() {
    char c;
    int letterCount = 0;
    int spaceCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    // ѭ����ȡ�ַ�ֱ���������з�
    while ((c = cin.get()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letterCount++;
        }
        else if (c == ' ') {
            spaceCount++;
        }
        else if (c >= '0' && c <= '9') {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    // ���ͳ�ƽ��
    cout << "Ӣ����ĸ����: " << letterCount << endl;
    cout << "�ո����: " << spaceCount << endl;
    cout << "�����ַ�����: " << digitCount << endl;
    cout << "�����ַ�����: " << otherCount << endl;

    return 0;
}