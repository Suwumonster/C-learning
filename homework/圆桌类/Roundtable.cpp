#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include "Roundtable.h"
using namespace std;
Roundtable::Roundtable(): color{0}{}
Roundtable::Roundtable(float r, float h, char c[]): Circle(r),Table(h)
{
	strcpy(color, c);
}
void Roundtable::display()
{
	cout << "Բ����Ϣ����:" << endl;
	cout << "Բ���������:" << Roundtable::getarea() << endl;
	cout << "Բ����:" << Roundtable::getheight() << endl;
	cout << "Բ����ɫ:" << color << endl;
}