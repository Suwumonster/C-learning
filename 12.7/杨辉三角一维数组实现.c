#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�������һά����ʵ��
int main()
{
	int data[30] = { 1 };
	
	int i, j;
	printf("1\n"); 
		for (i = 1; i < 6; i++)
		{
			for (j = i; j > 0; j--) //�Ӻ���ǰ�������һ�е�������ʹ��ǰ�ͱ�����
			{
				data[j] += data[j - 1];
			}

			for (j = 0; j <= i; j++) //��һ�������ֱ�Ӵ�ӡ�ˡ�
			{
				printf("%d ", data[j]);
			}
			putchar('\n');
		}
		return 0;
}
