#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
void pr(int x)//˳���ӡ
{
	if (x > 9)
	{
		pr(x / 10);
	}
	cout << x % 10<<'\t';
}
void downpr(int a,int b)//�����ӡ
{
	int c = a / 10;
	if (c > 9)
	{
		downpr(a/10 ,b % c);
	}
	cout << b / c<<'\t';
}
int main()
{
	int num = 0, i = 1, z;
	cin >> num;
	for (z = 10; num >= z; z *= 10)
	{
		i++;
	}
	cout << i <<endl;//��ӡλ��
	pr(num);
	downpr(z ,num);
	return 0;
}