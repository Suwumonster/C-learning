#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//2������ѧ�ڶ���������һ����λ����ͬ��������1111��2222�� 4 λ��Ȼ��������ɸ����ĸ�λ����������
// �У��γ�һ���������һ����С����֮����������������Ϊһ����Ȼ�����ظ������������㣬��
//�ᷢ��һ�����ص�����
int mMsort(int);
int Mmsort(int);
int main()
{
	int n = 0;
	int min = 0;
	int max = 0;
	cin >> n;
	while (1)
	{
		min = mMsort(n);
		max = Mmsort(n);
		int temp = max - min;
		if (n == temp)
		{
			break;
		}
		n = temp;
	}
	cout << n << endl;
	return 0;
}
int Mmsort(int n)
{
	int arr[4] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; n > 0;i++)
	{
		arr[i] = n % 10;
		n /= 10;
	}
	for (i = 0; i < 4 ; i++)
	{
		for (j = i + 1; j < 4; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return 1000 * arr[0] + 100 * arr[1] + 10 * arr[2] + arr[3];
}
int mMsort(int n)
{
	int arr[4] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; n > 0; i++)
	{
		arr[i] = n % 10;
		n /= 10;
	}
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 4; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return 1000 * arr[0] + 100 * arr[1] + 10 * arr[2] + arr[3];
}