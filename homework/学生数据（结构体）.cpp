#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//��10��ѧ����ÿ��ѧ�������ݰ���ѧ�š�������3�ſεĳɼ����Ӽ�������10��ѧ�����ݣ�Ҫ��
//��ӡ��3�ſ���ƽ���ɼ����Լ���߷ֵ�ѧ�������ݣ�����ѧ�š�������3�ſγɼ���ƽ��������
struct student
{
	char id[20];
	char name[20];
	int pj1;
	int pj2;
	int pj3;
	double average;
};
int main()
{
	student s[10] = { 0 };
	int i = 0;
	int maxMark = 0;//��߷�ѧ�����±�
	int max = 0;//���ƽ����
	double As1 = 0;//��һ�Ƶ���ƽ����
	double As2 = 0;//�ڶ��Ƶ���ƽ����
	double As3 = 0;//�����Ƶ���ƽ����

	for (i = 0; i < 10; i++)//��������
	{
		cout << "�������" << i + 1 << "λͬѧ��ѧ�š�������3�ſεĳɼ����ֱ����룩" << endl;
		cin >> s[i].id;
		cin >> s[i].name;
		cin >> s[i].pj1;
		cin >> s[i].pj2;
		cin >> s[i].pj3;
		s[i].average = (s[i].pj1 + s[i].pj2 + s[i].pj3) / 3.0;
	}

	for (i = 0; i < 10; i++)//���������ƽ����
	{
		As1 += s[i].pj1;
		As2 += s[i].pj2;
		As3 += s[i].pj3;
	}
	As1 /= 10.0;
	As2 /= 10.0;
	As3 /= 10.0;
	cout << "������ƽ�������£�" << endl;
	cout << As1 << '\t';
	cout << As2 << '\t';
	cout << As3 << endl;

	max = s[0].average;//�ȼ���ƽ������ߵ��ǵ�һλͬѧ
	for (i = 1; i < 10; i++)//�Ƚ�ѡ����߷ֵ�ͬѧ
	{
		if (max < s[i].average)
		{
			max = s[i].average;
			maxMark = i;
		}
	}
	cout << "��߷ֵ�ѧ�����������£�" << endl;
	cout << s[maxMark].id << '\t';
	cout << s[maxMark].name << '\t';
	cout << s[maxMark].pj1 << '\t';
	cout << s[maxMark].pj2 << '\t';
	cout << s[maxMark].pj3 << '\t';
	cout << s[maxMark].average << endl;
	return 0;
}