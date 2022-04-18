#define _CRT_SECURE_NO_WARNINGS 1
#include "stdafx.h"
#include "reader.h"
#include "rdatabase.h"
#include "book.h"
#include "bdatabase.h"
int main(int argc, char* argv[])
{
	int choice = 1, bookid, readerid;
	RDatabase ReaderDB;
	BDatabase BookDB;
	Reader* r;
	Book* b;
	char c;
	cout << "��ӭ���롰ССͼ��ݡ��������" << endl;
	cout << "------------------------------" << endl;
	while (choice != 0)
	{
		system("cls");
		cout << "----------------------------------------------" << endl;
		cout << "1: ���� 2 ���� 3: ͼ��ά�� 4: ����ά�� 0: �뿪" << endl;
		cin >> choice;
		cout << "----------------------------------------------" << endl;
		switch (choice)
		{
		case 1:
			cout << "���������߱��" << endl;
			cin >> readerid;
			r = ReaderDB.query(readerid);
			if (r == NULL)
			{
				cout << "�ö��߲����ڣ����ܽ��飡" << endl;
				cout << "�� b ���ز˵�" << endl;
				while (cin >> c)
				{
					if (c == 'b')
					{
						break;
					}
				}
				break;
			}
			cout << "�������£� ��š�ͼ�������ڼ�(ps:1�ڼ�0���ڼ�)" << endl;
			BookDB.list();
			cout << "����ͼ����" << endl;
			cin >> bookid;
			b = BookDB.query(bookid);
			if (b == NULL)
			{
				cout << "��ͼ�鲻���ڣ����ܽ��飡" << endl;
				cout << "�� b ���ز˵�" << endl;
				while (cin >> c)
				{
					if (c == 'b')
					{
						break;
					}
				}
				break;
			}
			if (b->borrowbook() == 0)
			{
				cout << "��ͼ���ѽ�������ܽ��飡" << endl;
				cout << "�� b ���ز˵�" << endl;
				while (cin >> c)
				{
					if (c == 'b')
					{
						break;
					}
				}
				break;
			}
			cout << "����ɹ���" << endl;
			r->borrowbook(b->getnumber()); 
			cout << "�� b ���ز˵�" << endl;
			while (cin >> c)
			{
				if (c == 'b')
				{
					break;
				}
			}
			break;
		case 2:
			cout << "���뻹����߱��" << endl;
			cin >> readerid;
			r = ReaderDB.query(readerid);
			if (r == NULL)
			{
				cout << "�ö��߲����ڣ����ܻ��飡" << endl;
				cout << "�� b ���ز˵�" << endl;
				while (cin >> c)
				{
					if (c == 'b')
					{
						break;
					}
				}
				break;
			}
			cout << "�������£� ��š�ͼ�������ڼ�(ps:1�ڼ�0���ڼ�)" << endl;
			BookDB.list();
			cout << "����ͼ����" << endl;
			cin >> bookid;
			b = BookDB.query(bookid);
			if (b == NULL)
			{
				cout << "��ͼ�鲻���ڣ����ܻ��飡" << endl;
				cout << "�� b ���ز˵�" << endl;
				while (cin >> c)
				{
					if (c == 'b')
					{
						break;
					}
				}
				break;
			}
			if (r->retbook(b->getnumber()) == 0)
			{
				cout << "�ö���û���Ȿ�飬���ܻ��飡" << endl;
				cout << "�� b ���ز˵�" << endl;
				while (cin >> c)
				{
					if (c == 'b')
					{
						break;
					}
				}
				break;
			}
			cout << "����ɹ���" << endl;
			b->retbook();
			r->retbook(b->getnumber()); 
			cout << "�� b ���ز˵�" << endl;
			while (cin >> c)
			{
				if (c == 'b')
				{
					break;
				}
			}
			break;
		case 3:
			BookDB.bookdata(); 
			break;
		case 4:
			ReaderDB.readerdata(); 
			break;
		case 0:
			break;
		default:
			cout << "�������!" << endl;
			Sleep(1000);
			break;
		}//end switch
	}//end while
	return 0;
}