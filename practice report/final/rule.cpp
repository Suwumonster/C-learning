#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <Windows.h>
#include "head.h"
using namespace std;
extern int(*mainp)();

void rule()
{
	system("cls");
	char ch = 0;
	cout << "��Ϸ�������£�" << endl;
	cout << "�淨��" << endl;
	cout << "������ÿһ�ؿ�ͷ�������һ�����֣�����ʾ����Ҫ��£�" << endl;
	cout << "���ֵ�λ��=��Ϸ�Ѷ�" << endl;
	cout << "1.�²�---���Ի�����˴���²����÷���" << endl;
	cout << "2.������һ�β²����÷����²�" << endl;
	cout << "�¶Խ�����һ�أ�û�¶Լ����²⣬�²�������������Ϸ��" << endl;
	cout << "����5�أ�Ӯ����Ϸ��" << endl;
	cout << endl;
	cout << "�ؿ���" << endl;
	cout << "Ĭ�Ϲؿ���Ϊ5" << endl;
	cout << "���������˵��޸�" << endl;
	cout << endl;
	cout << "��Ϸ�Ѷȣ�" << endl;
	cout << "��Ϸ��ʼ���׶ȣ�����һ�ص��Ѷȣ�Ĭ��Ϊ2��" << endl;
	cout << "��Ϸ��ʼ�Ѷȿ��������˵��趨��" << endl;
	cout << "ÿ��һ����Ϸ�Ѷȼ�һ��" << endl;
	cout << endl;
	cout << "������" << endl;
	cout << "������Ϊ���֣���һ���Ǹ����֣�" << endl;
	cout << "����¶Ը����ĸ�������λ��Ҫ�� ���� ���Ը�������123 ��" << endl;
	cout << "��µ��� 144 ���� 414 �����õĸ����ֶ���1" << endl;
	cout << "�ڶ�����׼ȷ��" << endl;
	cout << "������׼ȷ�̶ȣ����� ����123" << endl;
	cout << "��� 124 ��׼ȷ��2�֣���� 134 �� 1 ��" << endl;
	cout << "�¶Լ����ü��֣���λ��Ҫ��" << endl;
	cout << endl;
	cout << "�²��������ʼ����Ϊ10��ÿ��һ�ؼ�10,�²�һ�μ�1��" << endl;
	cout << endl;
	cout << "����b�������˵�" << endl;

	mark:
	cin >> ch;
	if (ch == 'b')
	{
		mainp();
	}
	else
	{
		cout << "��������ַ�����b�����������룡" << endl;
		goto mark;
	}
}