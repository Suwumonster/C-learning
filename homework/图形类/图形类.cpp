#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "c-head.h"
using namespace std;
Circle cir;
Rectangle rec;
Triangle tri;
void circle();
void rectangle();
void triangle();
int main()
{
	int i;
	while (1)
	{
		cout << "ѡ��һ��ͼ����:" << endl;
		cout << "1.Բ" << endl;
		cout << "2.����" << endl;
		cout << "3.������" << endl;
		cout << "0.�˳�����" << endl;
		cin >> i;
		if (i == 0)
		{
			break;
		}
		else if (i == 1)
		{
			circle();
		}
		else if (i == 2)
		{
			rectangle();
		}
		else if (i == 3)
		{
			triangle();
		}
	}
	return 0;
}

void circle()
{
	int n;
	int x, y, z;
	while (1)
	{
		cout << "ѡ��:" << endl;
		cout << "1.����Բ������Ͱ뾶" << endl;
		cout << "2.չʾԲ�Ļ�����Ϣ" << endl;
		cout << "3.�����" << endl;
		cout << "0.�˳�Բ��" << endl;
		cin >> n;
		if (n == 0)
		{
			break;
		}
		else if (n == 1)
		{
			cin >> x >> y >> z;
			cir.set(x, y, z);
		}
		else if (n == 2)
		{
			cir.show();
		}
		else if (n == 3)
		{
			cout << cir.getarea() << endl;
		}
	}
}
void rectangle()
{
	int n;
	int x, y;
	while (1)
	{
		cout << "ѡ��:" << endl;
		cout << "1.������εĳ��Ϳ�" << endl;
		cout << "2.չʾ���εĻ�����Ϣ" << endl;
		cout << "3.�����" << endl;
		cout << "0.�˳�������" << endl;
		cin >> n;
		if (n == 0)
		{
			break;
		}
		else if (n == 1)
		{
			cin >> x >> y;
			rec.set(x, y);
		}
		else if (n == 2)
		{
			rec.show();
		}
		else if (n == 3)
		{
			cout << rec.getarea() << endl;
		}
	}
}

void triangle()
{
	int n;
	int a, b, c, d, e, f;
	while (1)
	{
		cout << "ѡ��:" << endl;
		cout << "1.���������ε���������" << endl;
		cout << "2.չʾ�����εĻ�����Ϣ" << endl;
		cout << "3.�����" << endl;
		cout << "0.�˳���������" << endl;
		cin >> n;
		if (n == 0)
		{
			break;
		}
		else if (n == 1)
		{
			cin >> a >> b >> c >> d >> e >> f;
			tri.set(a, b, c, d, e, f);
		}
		else if (n == 2)
		{
			tri.show();
		}
		else if (n == 3)
		{
			cout << tri.getarea() << endl;
		}
	}
}