#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//�۰����
int search(int arr[], int n1, int n2, int x);
int main()
{
	int i;
	int arr[15] = { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	cin >> i;
	search(arr, 0, 15, i);
	return 0;
}
int search(int arr[], int n1, int n2, int x)// �۰����  
{
	if (x > arr[n1] || x < arr[n2 - 1])
	{
		cout << " �޴���" << endl;
		return 0;
	}
	else if (x == arr[(n1 + n2) / 2])
	{
		cout << "�����������" << (n1 + n2) / 2 + 1 << "λ";
		return 0;
	}
	else if (x > arr[(n1 + n2) / 2])
	{
		return search(arr, n1, (n1 + n2) / 2, x);
	}
	else if (x < arr[(n1 + n2) / 2])
	{
		return search(arr, (n1 + n2) / 2, n2 , x);
	}
}