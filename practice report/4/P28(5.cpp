#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[3][3] = { {85,90,80},{65,70,75},{75,85,77} };//ѧ��1��Ӣ��  ����   c++��  ѧ��2��Ӣ��  ����   c++��  ѧ��3  ��Ӣ��  ����   c++��
//	int StdAverage[3] = {0};//ѧ��ƽ����
//	int ProjAverage[3] = {0};//Ӣ�������c++��ƽ����
//	int count;
//	for (count = 0; count < 3; count++)
//	{
//		StdAverage[0] += arr[0][count];//ѧ��1
//		StdAverage[1] += arr[1][count];//ѧ��2
//		StdAverage[2] += arr[2][count];//ѧ��3
//		ProjAverage[0] += arr[count][0];//Ӣ��
//		ProjAverage[1] += arr[count][1];//����
//		ProjAverage[2] += arr[count][2];//c++
//	}
//	for (count = 0; count < 3; count++)
//	{
//		cout << "StdAverage["<< count <<"] =" << StdAverage[count] / 3 << endl;
//		cout << "ProjAverage["<< count <<"] =" << ProjAverage[count] / 3 << endl;
//	}
//	return 0;
//}