#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "�����������εĵ�һ���ߣ�" << endl;
	cin >> side1;
	cout << "�����������εĵڶ����ߣ�" << endl;
	cin >> side2;
	cout << "�����������εĵ������ߣ�" << endl;
	cin >> side3;
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
		//�����ܳ�
	{
		double perimeter = side1 + side2 + side3;
		cout << "�����ε��ܳ��ǣ�" << perimeter << endl;
	}
	//�ж��Ƿ�Ϊ����������
	if ( side1 == side2 || side1 == side3||side2 == side3)
	{
			cout << "���������ǵ���������" << endl;
	}
	else {
		cout << "�������β��ǵ���������" << endl;
	}
		return 0;
}

