#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//�������
int main()
{
	int arr[30][30] = { 0 };
	int i, j;
	for (i = 0; i < 10; i++)//����
	{
		for ( j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < 10; i++)//��ӡ
	{
		for (j = 0; j <= i; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	return 0;
}