#include <iostream>
using namespace std;

// �����Լ���ĺ���
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "������������������";
    cin >> a >> b;

    // �����Լ��
    int greatestCommonDivisor = gcd(a, b);
    // ����С������
    int leastCommonMultiple = a * b / greatestCommonDivisor;

    cout << "���Լ���ǣ�" << greatestCommonDivisor << endl;
    cout << "��С�������ǣ�" << leastCommonMultiple << endl;

    return 0;
}