#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "Roundtable.h"
using namespace std;
int main()
{
	float rr, hh;
	char c[10];
	cout << "������Բ����Ϣ: Բ���뾶��Բ���ߡ�Բ����ɫ" << endl;
	cin >> rr >> hh >> c;
	Roundtable a(rr, hh, c);
	a.display();
	return 0;
}