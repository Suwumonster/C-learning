#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	short arr[100][2]= { 0 };
	int l = 0;//��·����
	int i,j = 0;
	int treenum = 0;
	int area = 0;//����

	scanf("%d %d", &l, &area);//����
	short pp[1000] = { 0 };//��̬�����һ��0����һ����

	for (i = 0; i < area; i++)
	{
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	for (i = 0; i < area; i++)
	{
		if (arr[i][1] <= l)
		{
			for (j = arr[i][0]; j <= arr[i][1]; j++)
			{
				*(pp + j) = 1;
			}
		}
		else if (arr[i][0] <= l && arr[i][1] > l)
		{
			for (j = arr[i][0]; j <= l; j++)
			{
				*(pp + j) = 1;
			}
		}
	}

	for (i = 0; i < l + 1 ; i++)
	{
		if (*(pp + i) == 0)
		{
			treenum++;
		}
	}
	printf("%d\n", treenum);
	return 0;
}

