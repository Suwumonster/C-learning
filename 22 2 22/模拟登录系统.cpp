#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string.h>
using namespace std;
// ģ���¼ ����¼���� ��¼�ɹ�����ʾ
int main()
{
	int i = 0;
	char password[] = "suwu123";
	char inword[20] = { 0 };
	cout << "���������� :>" << endl;
	for (i = 0; i < 3; i++)
	{
		cin >> inword;
		if (strcmp(password, inword) == 0)
		{
			cout << "��¼�ɹ���" << endl;
			break;
		}
		else
		{
			cout << "����������������룡" << endl;
		}
	}
	if (i == 3)
	{
		cout << "���λ��������꣬��¼ʧ�ܣ�" << endl;
	}
	return 0;
}