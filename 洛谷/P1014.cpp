#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���Cantor�� P1014
int main()
{
	int num = 1, Num = 1;//���ӷ�ĸ
	int count1 = 1;//ѭ������
	int i = 0;
	int n = 0;//�ڼ���
	scanf("%d", &n);
	while(n)
	{ 
		n--;
		if (n == 0)
		{
			break;
		}
		Num++;
		
		for (i = 0; i < count1; i++)
		{
			n--;
			if (n == 0)
			{
				break;
			}
			num++;
			Num--;
		}
		if (n == 0)
		{
			break;
		}
		count1++;

		n--;
		if (n == 0)
		{
			break;
		}
		num++;
		
		for (i = 0; i < count1; i++)
		{
			n--;
			if (n == 0)
			{
				break;
			}
			num--;
			Num++;
		}
		if (n == 0)
		{
			break;
		}
		count1++;
	}
	printf("%d/%d\n", num, Num);

	return 0;
}