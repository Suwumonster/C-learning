#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <Windows.h>
using namespace std;
extern int(*mainp)();
void cpset(int * p)
{
	system("cls");
	char ch = 0;
	cout << "��ǰ�ؿ���Ϊ" << *p << endl;
	cout << "���ùؿ�����";
	cin >> *p;
	cout << "������Ĺؿ���Ϊ" << *p << endl;
	cout << "����b�������˵�" << endl;
mark2:
	cin >> ch;
	if (ch == 'b')
	{
		mainp();
	}
	else
	{
		cout << "��������ַ�����b�����������룡" << endl;
		goto mark2;
	}
}