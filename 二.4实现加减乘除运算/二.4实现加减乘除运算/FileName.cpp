#include <iostream>
using namespace std;
int main() {
	double num1, num2;
	char op;
	cout << "�������һ�����֣�" << endl;
	cin >> num1;
	cout << "�������������+-*/%����" << endl;
	cin >> op;
	cout << "������ڶ������֣�" << endl;
		cin >> num2;
	//�����������������
	switch (op) {
	case '+':
		cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
		break;
	case'-':
		cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
		break;
	case '*':
			cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
			break;
		case'/':
			if (num2 == 0) {
				cout << "��������Ϊ0��" << endl;
			}
			else {
				cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;

			}break;
		case'%':
			if (num2 == 0) {
				cout << "��������Ϊ0��" << endl;
			}
			else if (num1 - (int)num1 != 0 || num2 - (int)num2 != 0)
			{
				cout << "ȡ�������������������" << endl;
			}
			else {
				cout << (int)num1 << "%" << (int)num2 << "=" << (int)num1 % (int)num2 << endl;
			}
			break;
		default:
			cout << "�Ƿ��������" << endl;
	} return 0;
}