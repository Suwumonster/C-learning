#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <Windows.h>
#include "head.h"
using namespace std;
extern int(*mainp)();

void settingLevel(int* p)
{
	system("cls");
	char ch = 0;
	cout << "��ǰ�Ѷ�Ϊ" << *p << endl;
	cout << "������Ϸ��ʼ�Ѷ�(PS:Ĭ���Ѷ�Ϊ2���Ѷȱ�����ڵ���2)��";

	mark1:
	cin >> *p;
	if (*p >= 2)
	{
		cout << "�����õ���Ϸ�Ѷ�Ϊ��" << *p << endl;
		cout << "����b�������˵�" << endl;
	}
	else
	{
		cout << "��û�а���Ҫ�����룬���������룡" << endl;
		goto mark1;
	}

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