#pragma once
#ifndef _book_h_
#define _book_h_
class Book //ͼ����
{
private:
	int note; //ɾ����ǣ�1����ɾ��0��δɾ��
	int number; //ͼ����
	char name[10]; //����
	int onshelf; //�ϼܱ�־ (1: �ڼ� 0�����ڼ�)
public:
	Book();
	char* getname(); //�������
	int getnote(); //���ɾ�����
	int getnumber(); //���ͼ����
	void setname(char na[]); //��������
	void delbook(); //ɾ��ͼ��
	void addbook(int n, char* na); //���ͼ��
	int borrowbook(); //�������
	void retbook(); //�������
	void list(); //���ͼ��
};
#endif
