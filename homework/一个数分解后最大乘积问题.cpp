#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
//��һ������ N��N ���Էֽ�����ɸ�����֮�ͣ�����ηֽ���ʹ��Щ���ĳ˻����
//���̣��ɼ�������һ������ N��N < 100������ N �ֽ�����ɸ������������Щ���ĳ�
//	�� M���ұ�֤ M �����ġ�
//	[�㷨����]
//����ѧ֪ʶ��֪��ֻ�а� N �ֳɾ����ܶ�� 3�����ǵĳ˻�������󣬣� ��ֻʣ
//�� 4 ʱ�㲻���ٷ��ˣ��� 4>3 * 1��
using namespace std;
int main()
{
	int n;
	cin >> n;
	int up = n / 3;//���Է�Ϊ����3
	int left = n % 3;//����
	int sum;
	switch (n)
	{
	case 1://nΪ1�����
		sum = 0;
		break;
	case 2://nΪ2�����
		sum = 1;
		break;
	case 3://nΪ3�����
		sum = 2;
		break;
	case 4://nΪ4�����
		sum = 4;
		break;
	default:
		if (left != 0)//n%3������Ϊ0�����
		{
			if( left != 1)//������Ϊ0�Ҳ�Ϊ1�����
			{
				sum = pow(3, up) * left;
			}
			else//����Ϊ1�����
			{
				sum = pow(3, up - 1) * 4;
			}
		}
		else//����Ϊ0
		{
			sum = pow(3, up);
		}
		break;
	}
	cout << sum << endl;
	return 0;
}