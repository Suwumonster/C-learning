#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdlib.h>
using namespace std;
// ��������Ϸ �������һ��0-100������
// �������ָ����������� �����´� or ��С
void menu()
{
	cout << "*************************" << endl;
	cout << "****   1.��ʼ��Ϸ    ****" << endl;
	cout << "****   0.�˳���Ϸ    ****" << endl;
	cout << "*************************" << endl;
	cout << "���������ѡ��:>";
}
void game()
{
	int num = rand() % 100 + 1;
	while (1)
	{
		int guess = 0;
		cout << "�����:>" << endl;
		cin >> guess;
		if (guess < num)
		{
			cout << "��С��" << endl;
		}
		else if (guess > num)
		{
			cout << "�´���" << endl;
		}
		else
		{
			cout << "��ϲ�㣬�¶��ˣ�" << endl;
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		cin >> input;
		if (input == 1)
		{
			game();
		}
	}
	while (input);
	return 0;
}