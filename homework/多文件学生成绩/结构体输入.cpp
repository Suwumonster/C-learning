#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "head.h";
using namespace std;
void store(student stu[])
{
	int i = 0;
	cout << "������ѧ�š��༶�����������ſγɼ�" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "��"<< i + 1 << "��ѧ��" << endl;
		cin >> stu[i].ID;
		cin >> stu[i].classname;
		cin >> stu[i].name;
		cin >> stu[i].score[0];
		cin >> stu[i].score[1];
		cin >> stu[i].score[2];
	}
}