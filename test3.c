#include <stdio.h>
int main()
{
	int length;
	int a[length];
	printf("���������鳤�ȣ�(���鳤������100)\n");
	scanf("%d", &length);
	printf("����������鳤��Ϊ:%d\n", length);
	int i, j, max;
	for (i = 0; i < length; i++)
	{
		printf("������a[%d]��С:\n", i);
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (j = 0; j < length; j++)
	{
		if (max <= a[j])
		{
			max = a[j];
		}
	}
	printf("���ֵmax=%d\n", max);
	return 0;
}

