#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
void halfSearch(int* p);
void sort(int* p);
int main()
{
	int arr[15] = { 0 };
	int* p = arr;
	sort(p);
	halfSearch(p);
	return 0;
}
void sort(int *p)
{
	int i,j = 0;
	for (i = 0; i < 15; i++)//����
	{
		cin >> *(p + i);
	}

	for (i = 0; i < 15; i++)//����
	{
		for (j = i + 1; j < 15; j++)
		{
			if ( *(p + i) < *(p + j))
			{
				int temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}
}
void halfSearch(int* p)
{
	int n = 0;
	int left = 0;
	int right = 14;
	int mid;
	cin >> n;
	while (left <= right)
	{
		mid = (left + right)/2;
		if ( n == *(p + mid))
		{
			cout << "�ҵ��ˣ��ǵ�" << mid + 1 << "Ԫ��" << endl;
			break;
		}
		else if (n < *(p + mid))
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	if (left > right)
	{
		cout << "�޴���" << endl;
	}
}