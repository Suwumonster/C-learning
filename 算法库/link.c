#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
typedef struct Link //���ṹ
{
	int num;
	struct Link* next;
}link;
int icount = 0;//����������һ���м�����㣬������ͷ�ڵ�
link* setlink(); // ��ͷָ���link����
void display(link* p);//�����������ĺ���
void delLink(link* p);//ɾ����������ĺ���
int main()
{
	link* pp;
	pp = setlink();
	display(pp);
	delLink(pp);
	return 0;
}
link* setlink()//��ͷָ���link����
{
	link* headp = (link*)malloc(sizeof(link));//ͷ���
	link* temp = headp;//ָ��ǰ����ָ��,��ʼ��ָ��ͷ���
	int n;
	scanf("%d", &n);//Ҫ�����������
	icount = n;
	while (n--)
	{
		link* newp = (link*)malloc(sizeof(link));
		scanf("%d", &newp->num);
		newp->next = NULL;//��ָ�� ָ�� ��ָ��
		temp->next = newp;//��ǰ��� �� �½�� ����
		temp = newp;//��ǰָ�� ָ�� �½��
	}
	return headp;
}



void display(link* p)//�����������ĺ���
{
	link* temp;
	link* dis;
	temp = p->next;
	int i = 0;
	while (temp)
	{
		dis = temp;
		temp = temp->next;
		if (i != 0)
		{
			printf(" ");
		}
		printf("%d", dis->num);
	}
	printf("\n");
}

void delLink(link* p)//ɾ����������ĺ���
{
	link* temp;
	link* del;
	temp = p;
	while (temp)
	{
		del = temp;
		temp = temp->next;
		free(del);
	}
	icount = 0;
}



