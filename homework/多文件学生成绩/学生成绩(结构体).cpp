#define _CRT_SECURE_NO_WARNINGS 1
#include "head.h";
#include <iostream>
using namespace std;
int main()
{
	student stu[5];
	int i = 0;
	store(stu);
	ave(stu);
	cout << "ѧ����ƽ��������:";
	for (i = 0; i < 5; i++)
	{
		if (i != 0)
		{
			cout << " ";
		}
		cout << stu[i].avescore;
	}
	cout << "\n";
	i = search(stu);
	cout << "ƽ������ߵ�ѧ����������" << endl;
	cout << stu[i].ID << " " << stu[i].classname << " " << stu[i].name << " ";
	cout << stu[i].score[0] << " " << stu[i].score[1] << " " << stu[i].score[2] << " ";
	cout << stu[i].avescore << endl;
	return 0;
}