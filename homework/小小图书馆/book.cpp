#define _CRT_SECURE_NO_WARNINGS 1
#include <iomanip>
#include "stdafx.h"
#include "book.h"
Book::Book() :name{ 0 }//����
{
	note = 1;//ɾ����ǣ�1����ɾ��0��δɾ��
	number = 0;//ͼ����
	onshelf = 0;//�ϼܱ�־ (1: �ڼ� 0�����ڼ�)
};
char* Book::getname()//�������
{
	return name;
}
int Book::getnote()//���ɾ�����
{
	return note;
}
int Book::getnumber()//���ͼ����
{
	return number;
}
void Book::setname(char na[])//��������
{
	strcpy(name, na);
}
void Book::addbook(int n, char* na)//���ͼ��
{
	note = 0;
	number = n;
	strcpy(name, na);
	onshelf = 1;
}
void Book::delbook()//ɾ��ͼ��
{
	strcpy(name, "0");
	note = 1;
	number = 0;
	onshelf = 0;
}
int Book::borrowbook()//�������
{
	if (onshelf == 1)
	{
		onshelf = 0;
		return 1;
	}
	return onshelf;
}
void Book::retbook()//�������
{
	onshelf = 1;
}
void Book::list()//���ͼ��
{
	if (note != 1)
	{
		cout << setw(10) << number << setw(10) << name << setw(10) << onshelf << endl;
	}
}