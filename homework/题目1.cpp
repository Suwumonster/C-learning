#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string.h>
using namespace std;

typedef struct student
{
	int id;
	char name[20];
	char sex[2];
	struct student * next;
}stu;
int fun(stu* person, int n);
stu* link(int n);
int main()
{
	int n = 0;
	printf("�����뱾�δ���ѧ���ĸ���:>");
	scanf("%d", &n);
	stu* person = link(n);
	cout << fun(person, n);
	return 0;
}
stu* link(int n)//������
{
	stu* head = new stu[sizeof(stu)];//ͷָ��
	stu* p;//���������½���ָ��
	stu* temp;//��ǰָ��
	temp = head;//ָ��ͷָ��
	int i = 0;
	for (i = 0; i < n; i++)
	{
		p = new stu[sizeof(stu)];
		cout << "��"<< i + 1 <<"��ѧ���� ѧ�� ���� �Ա�(M/W):" << endl;
		cin >> p->id;
		cin >> p->name;
		cin >> p->sex;
		p->next = NULL;
		temp->next = p;
		temp = p;
	}
	return head;
}
int fun(stu* person, int n)
{
	int i = 0;
	stu* temp;
	temp = person->next;//��Ԫ���
	int count = 0;
	while (n--)
	{
		if (strcmp((temp->sex),"M") == 0)
		{
			count++;
		}
		temp = temp->next;//������һ�����
	}
	return count;
}
