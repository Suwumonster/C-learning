#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct STU
{
	char name[16];
	int check;//1Ϊ�������ֲ����ٱ���0Ϊδ�����ֵ�
};

int main()
{
	STU st[64];
	int n, w, s = 0;//nΪ������wΪ�ӵڼ�λ��ʼ������sΪ��w��ʼ�ڼ�����Ҫ�����ֵ�
	int i = 0;
	int count = 1;//ͳ�Ʊ����Ĵ���
	int k = 0;//ͳ�Ʊ������ֵĴ���
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", st[i].name);
		st[i].check = 0;
	}
	scanf("%d,%d", &w, &s);
	for (i = w - 1; k < n; i++)
	{
		if (i == n)
		{
			i = 0;
		}
		if (st[i].check == 0)
		{
			if (count % s == 0)
			{
				printf("%s\n", st[i].name);
				k++;
				st[i].check = 1;
			}
			count++;
		}

	}

	return 0;
}