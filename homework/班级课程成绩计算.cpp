#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Id_avesco(int id[], int sco[][5], float avesco[]);
void avescore(int(* p)[5][5]);
int main()
{
	int id[5] = { 0 };//ѧ��
	int sco[5][5] = { 0 };//����
	float avesco[5] = { 0 };//ѧ��ƽ����
	int(*p)[5][5] = &sco;
	Id_avesco(id, sco, avesco);
	avescore(p);
	return 0;
}
void Id_avesco(int id[], int sco[][5], float avesco[])
{
	int i, j = 0;

	for (i = 0; i < 5; i++)//����ѧ�źͳɼ�
	{
		printf("������ѧ��:>");
		scanf("%d", &id[i]);
		printf("���������ųɼ�:>\n");
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &sco[i][j]);
			avesco[i] += sco[i][j];
		}
		avesco[i] /= 5.0;
	}

	for (i = 0; i < 5; i++)//���ѧ�źͳɼ�
	{
		printf("ѧ��:%d �ɼ�:\n", id[i]);
		for (j = 0; j < 5; j++)
		{
			if (j != 0)
			{
				printf(" ");
			}
			printf("%d", sco[i][j]);
		}
		printf("\n");
		printf("ƽ���ɼ�:%f\n", avesco[i]);
	}
}

void avescore(int (*p)[5][5])
{
	int i, sum = 0;
	int n;
	printf("Ҫ��ڼ��ſγ̵�ƽ���֣�:>");
	scanf("%d", &n);
	for (i = 0; i < 5; i++)
	{
		sum += *(*(*p + i) + (n - 1));
	}
	printf("%f", sum/5.0);
}