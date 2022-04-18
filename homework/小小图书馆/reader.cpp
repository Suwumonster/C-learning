#define _CRT_SECURE_NO_WARNINGS 1
#include<iomanip>
#include "stdafx.h"
#include "reader.h"
Reader::Reader() :name{ 0 }, borbook{ 0 }//�������� //����ͼ��
{
	note = 1;//ɾ����ǣ�1����ɾ��0��δɾ��
	number = 0;//���߱��
}
char* Reader::getname()//�������
{
	return name;
}
int Reader::getnote() //���ɾ�����
{
	return note;
}
int Reader::getnumber()//��ö��߱��
{
	return number;
}
void Reader::setname(char na[])//��������
{
	strcpy(name, na);
}
void Reader::addreader(int n, char* na)//��Ӷ���
{
	note = 0;
	number = n;
	strcpy(name, na);
	for (int i = 0; i < Maxbor; i++)
	{
		borbook[i] = 0;
	}
}
void Reader::delreader()//����ɾ�����
{
	note = 1;
	number = 0;
	strcpy(name, "0");
	for (int i = 0; i < 5; i++)
	{
		borbook[i] = 0;
	}
}
void Reader::borrowbook(int bookid)//�������
{
	for (int i = 0; i < Maxbor; i++)
	{
		if (borbook[i] == 0)
		{ 
			borbook[i] = bookid; 
			return ; 
		}
	}
}
int Reader::retbook(int bookid)//�������
{
	for (int i = 0; i < Maxbor; i++)
	{
		if (borbook[i] == bookid) 
		{ 
			borbook[i] = 0; 
			return 1; 
		}
	}
	return 0;
}
void Reader::list()//���������Ϣ
{
	cout << number << setw(13) << name << setw(10)  <<"   �����ţ�[";
	for (int i = 0; i < Maxbor; i++)
	{
		if (borbook[i] != 0)
		{
			cout << borbook[i] << " ";
		}
	}
	cout << "]" << endl;
}

int Reader::check()
{
	for (int i = 0; i < Maxbor; i++)
	{
		if (borbook[i] != 0)
		{
			return 1;
		}
	}
	return 0;
}