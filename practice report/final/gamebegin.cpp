#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <Windows.h>
#include <time.h>
#include <cmath>
#include "head.h"
using namespace std;
extern int (*mainp)();
void gameBegin(int n, int x)//n���Ѷȡ�x�ǹؿ���
{
	mark:
	system("cls");
	int j;
	int checkpoint;//��Ϸ�ؿ�
	static int change = 10;//�²����
	int guess;//��ҽ����������
	int score1 = 0, score2 = 0;//�����֡�׼ȷ��
	int* ps1 = &score1;
	int* ps2 = &score2;
	srand((unsigned)time(NULL));
	for(checkpoint = 1; checkpoint <= x; checkpoint++)
	{
		cout << "һ����" << x << "��" << endl;
		cout << "��ǰ�ǵ�" << checkpoint << "��" << endl;
		cout << "�Ѷ�Ϊ" << n << endl;
		int number = rand() % ((int)pow(10, n) - (int)pow(10, checkpoint)) + (int)pow(10, checkpoint);//���������
		int* pn = &number;
		int* pg = &guess;
		for (j = change; j > 0; j--)
		{
			check(pg, number, ps1, ps2, n);
			cout << "������Ϊ" << *ps1 << endl;
			cout << "׼ȷ��Ϊ" << *ps2 << endl;
			cout << "ʣ��ɲ²����" << j-1 << endl;
			if (*pg == number)
			{
				break;
			}
		}
		if (*pg != number && j == 0)
		{
			cout << "�ɲ²���������꣬���������Ϸ!" << endl;
			break;
		}
		if (checkpoint == x && *pg == number)
		{
			cout << "��ϲ��Ӯ����Ϸ��" << endl;
			break;
		}
		change += 10;
		n++;
	}
	char ch = 0;
	cout << "����b�������˵�������r������Ϸ��" << endl;
	cin >> ch;
	if (ch == 'b')
	{
		mainp();
	}
	else if (ch == 'r')
	{
		goto mark;
	}
}