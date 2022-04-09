#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
#include <string>
using namespace std;
typedef struct NODE
{
	int x;
	int y;
}node;
int arr[26][2] = { 0 };
int main()
{
	stack <node> m1;//�洢��õľ��� �С�����
	int n = 0;//����(��ĸ)����
	int i = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		getchar();//��\n���
		char c = getchar() - 65;
		cin >> arr[c][0] >> arr[c][1];
	}
	getchar();//�����һ��\n���
	char str[100];//��������һ�е��ַ���
	while (cin >> str)
	{
		int sum = 0;
		int error = 0;
		int k = strlen(str);
		for (i = 0; i < k; i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				node temp;
				temp.x = arr[str[i] - 65][0];
				temp.y = arr[str[i] - 65][1];
				m1.push(temp);
			}
			else if (str[i] == ')')
			{
				node p, q, temp;
				p = m1.top();
				m1.pop();
				q = m1.top();
				m1.pop();
				if (q.y == p.x)
				{
					sum += (q.x * q.y * p.y);
					temp.x = q.x;
					temp.y = p.y;
					m1.push(temp);
				}
				else
				{
					error = 1;
					break;
				}
			}
		}
		if (error == 1)
		{
			cout << "error" << endl;
		}
		else
		{
			cout << sum << endl;
		}
	}
	return 0;
}