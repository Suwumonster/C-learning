#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;
void check(int* x, int y, int* p1, int* p2, int n)//������ĺ���
	//��Ҳµ��������Ը��������������֡�׼ȷ�֡��Ѷȣ�λ����
{
	*x = 0;
mark:
	cout << "�������" << endl;
	cin >> *x;
	*p1 = 0;
	*p2 = 0;
	int i,j;
	int temp = *x;//�����м����������ֹ����а�*x���0
	int arr1[20] = { 0 };
	int arr2[20] = { 0 };
	if (temp < pow(10,n - 1) || temp >= pow(10, n))//����������֡�����ȷ���뽫��������
	{
		cout << "�������������" << n << "λ�������������룡" << endl;
		goto mark;
	}
	for (i = n - 1; i >= 0; i--)//�������ֵ�������
	{
		arr1[i] = temp % 10;
		arr2[i] = y % 10;
		temp /= 10;
		y /= 10;
	}
	for (i = 0; i < n; i++)
	{
		if (arr1[i] == arr2[i])//����׼ȷ��
		{
			(*p2)++;
		}
		for (j = 0; j < n; j++)//���������
		{
			if (arr1[i] == arr2[j])
			{
				(*p1)++;
			}
		}
	}
}