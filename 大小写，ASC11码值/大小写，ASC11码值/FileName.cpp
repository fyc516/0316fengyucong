#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "������һ���ַ�:" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		//ת��Ϊ��д
		ch = ch - 32;
		cout << ch << endl;
	}
	else {
		//�������ַ���ASCII��ֵ
		int nextAscii = (int)ch + 1;
		cout << nextAscii << endl;
	}
	return 0;
}