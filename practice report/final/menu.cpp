#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include "head.h"
using namespace std;
extern int(*mainp)();

int menu()
{
	system("cls");
	int option;
	static int level = 2;//�Ѷ�
	static int plSet_cp = 5;//����趨�Լ��Ĵ��ع���
	int* pl = &level;
	int* pp = &plSet_cp;
	cout << "--------������С��Ϸ--------" << endl;
	cout << "           ���˵�           " << endl;
	cout << "         1.��ʼ��Ϸ         " << endl;
	cout << "       2.�鿴��Ϸ����       " << endl;
	cout << "     3.������Ϸ��ʼ���׶�   " << endl;
	cout << "        4.���ùؿ���        " << endl;
	cout << "         5.������Ϸ         " << endl;
	cout << "                    by:Suwu " << endl;
	cout << "����ѡ���Ž���ѡ��";
mark1:
	cin >> option;
	switch (option)
	{
	case 1:
		gameBegin(*pl , *pp);
		break;
	case 2:
		rule();
		break;
	case 3:
		settingLevel(pl);
		break;
	case 4:
		cpset(pp);
		break;
	case 5:
		return 0;
	default:
		cout << "��û�а���Ҫ�����룬���������룡" << endl;
		goto mark1;
	}
}



