#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;
//���ʵ��һ�����ܣ�ͳ��ָ��n��1 < n < 10)λ�Գ������ĸ�����������������ĶԳ�������
//    Ҫ��1)����һ������int isPrime��long x)ʵ�������ļ�⣻
//    2������һ������bool isPalindrome(long x)ʵ�ֶԳ����ļ�⡣
//    �����Ĳ�����������1�������������Զ���
//    ��ʾ��
//    �Գ�������һ������m������������m�������mΪ�Գ�����������������һ������m����ǶԳ����������������mΪ�Գ�������
//    ���磺101��131��929�ȶ���3λ�ĶԳ�����������Ϊ���ҶԳơ�
int isPrime(long);
bool isPalindrome(long,int);
int main()
{
	int n = 0;//λ��
	cin >> n;
	long m = pow(10, n) - 1;//nλ����������
	while (1)
	{
		if (isPrime(m) == 1)//������
		{
			if (isPalindrome(m, n) == 1)//�ԳƷ�
			{
				break;
			}
		}
		m--;//�Լ�
	}
	cout << m << endl;
	return 0;
}
int isPrime(long x)//����x�Ƿ�Ϊ����
{
	int i = 0;
	int prime = 1;//�ȼ���������
	for (i = 2; i < x / 2; i++)
	{
		if ( x % i == 0)
		{
			prime = 0;//��1�ͱ����������������������
			break;
		}
	}
	return prime;//����ֵ��1��0��
}
bool isPalindrome(long x, int n)//��x��λ��n
{
	int arr[10] = { 0 };
	int i = 0;
	long num = 0;//��������
	long temp = x;//��x�����ں������������Ƚ�
	for (i = 0; x > 0; i++)//���λ�ϵ���
	{
		arr[i] = x % 10;
		x /= 10;
	}//����temp��x����for����x��0.
	for(i = 0;; i++)//��������num
	{
		num = num + arr[i];
		n--;
		if (n == 0)
		{
			break;
		}
		num *= 10;
	}
	if (num == temp)//�ж��Ƿ�Գ�
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

