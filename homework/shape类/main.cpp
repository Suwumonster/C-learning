#define _CRT_SECURE_NO_WARNINGS 1
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include <iostream>
using namespace std;
int main()
{
	float r, x, y, a;
	cout << "���� Բ�İ뾶 ���εĳ��Ϳ� �����εı߳�" << endl;
	cin >> r >> x >> y >> a;
	Circle C(r);
	Rectangle R(x,y);
	Square S(a);
	cout << "Բ�����:" << C.getarea() << endl;
	cout << "���ε����:" << R.getarea() << endl;
	cout << "�����ε����:" << S.getarea() << endl;
	return 0;
}