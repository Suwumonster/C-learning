#pragma once
#ifndef _reader_h_
#define _reader_h_
const int Maxbor = 5; //��������
class Reader //������
{
private:
	int note; //ɾ����ǣ�1����ɾ��0��δɾ��
	int number; //���߱��
	char name[10]; //��������
	int borbook[Maxbor]; //����ͼ��
public:
	Reader();
	char* getname(); //�������
	int getnote(); //���ɾ�����
	int getnumber(); //��ö��߱��
	void setname(char na[]); //��������
	void delreader(); //����ɾ�����
	void addreader(int n, char* na); //��Ӷ���
	void borrowbook(int bookid); //�������
	int retbook(int bookid); //�������
	void list(); //���������Ϣ
	int check();//������Ƿ���
};
#endif
