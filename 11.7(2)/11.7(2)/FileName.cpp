#include <iostream>
using namespace std;
const double PI = 3.14159;
int main()
{
	
	double radius;
	
	cout << "������Բ׶����뾶:";
	
	cin >> radius;
	double height;
	cout << "������Բ׶�ĸߣ�";
	cin >> height;
	double volume = PI * radius * radius * height / 3;
	cout << "Բ׶���Ϊ��" << volume << endl;
	system("pause");

	return 0;

}