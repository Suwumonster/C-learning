#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream> 
#include<iomanip> 
using namespace std;
void main()
{
	double weight, price, real_pay, per;
	cout << "������ƻ������(��)��";
	cin >> weight;
	if (weight > 10)
		per = 0.8;
	else if (weight > 8)
		per = 1.0;
	else if (weight > 6)
		per = 1.2;
	else if (weight > 4)
		per = 1.5;
	else
		per = 1.8;
	price = weight * per;
	cout << setprecision(2);
	cout << fixed;
	cout << "Ӧ�����" << price << endl;
	cout << "�˿�ʵ�ʸ��";
	cin >> real_pay;
	cout << "Ӧ�һ�Ǯ����" << real_pay - price << endl;
}