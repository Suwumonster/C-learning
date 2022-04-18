#define _CRT_SECURE_NO_WARNINGS 1
#include "stdafx.h"
#include<fstream>
#include"bdatabase.h"

BDatabase::BDatabase()//���캯����ʼ�������ļ�
{
	Book s;
	top = -1;//ͼ���¼ָ��
	fstream file;
	file.open("book.dat", ios::in | ios::binary);
	while (1)
	{
		file.read((char*)&s, sizeof(s));
		if (!file)
		{
			break;
		}
		top++;
		book[top] = s;//ͼ���¼
	}
	file.close();
}
void BDatabase::clear()//ȫ��ɾ��
{
	int k = 0;
	for (int i = 0; k < top; i++)
	{
		if (book[i].getnote() == 0)
		{
			book[i].delbook();
			k++;
		}
	}
	top = -1;
}
Book* BDatabase::query(int bookid)//����ͼ��
{
	int k = 0;
	for (int i = 0; k <= top; i++)
	{
		if (book[i].getnote() == 0)
		{
			if (book[i].getnumber() == bookid)
			{
				return &book[i];
			}
			k++;
		}
	}
	return NULL;
}
int BDatabase::addbook(int n, char* na)//���ͼ��
{
	Book* p = query(n);
	if (p == NULL)
	{
		int k = 0;
		for (int i = 0; k < top; i++)
		{
			if (book[i].getnote() == 1)
			{
				book[i].addbook(n, na);
				top++;
				return 1;
			}
			else
			{
				k++;
			}
		}
		top++;
		book[top].addbook(n, na);
		return 1;
	}
	return 0;
}
void BDatabase::list()//���ͼ����Ϣ
{
	int k = 0;
	for (int i = 0; k <= top; i++)
	{
		if (book[i].getnote() == 0)
		{
			book[i].list();
			k++;
		}
	}
}
BDatabase::~BDatabase() //����������д�ļ�
{
	fstream file;
	file.open("book.dat", ios::out | ios::binary);
	int k = 0;
	for (int i = 0; k <= top; i++)
	{
		if (book[i].getnote() == 0)
		{
			file.write((char*)&book[i], sizeof(book[i]));
			k++;
		}
	}
	file.close();
}
void BDatabase::bookdata()//ͼ���ά��
{
	int choice = 1;
	char bookname[20];
	int bookid;
	Book* b;
	int temp = 0;
	char c;
	while (choice != 0)
	{
		system("cls");
		cout << "ͼ��ά����" << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << "1:���� 2���������� 3��ɾ�� 4������ 5����ʾ 6��ȫɾ 0���˳������˵�" << endl;
		cin >> choice;
		cout << "--------------------------------------------------------------" << endl;
		switch (choice)
		{
		case 1://������
			cout << "����ͼ���ţ�";
			cin >> bookid;
			cout << "����ͼ������";
			cin >> bookname;
			temp = addbook(bookid, bookname); 
			if (temp)
			{
				cout << "���ӳɹ�" << endl;
				cout << "�� b ����ͼ��ά���˵�" << endl;
				while (cin >> c)
				{
					if (c == 'b')
					{
						break;
					}
				}
				break;
			}
			cout << "���д��飬����ʧ��" << endl;
			cout << "�� b ����ͼ��ά���˵�" << endl;
			while (cin >> c)
			{
				if (c == 'b')
				{
					break;
				}
			}
			break;
		case 2://������
			cout << "����ͼ���ţ�";
			cin >> bookid;
			b = query(bookid);
			if (b == NULL)
			{
				cout << "����ʧ�ܣ���ͼ�鲻���ڣ�" << endl;
				cout << "�� b ����ͼ��ά���˵�" << endl;
				while (cin >> c)
				{
					if (c == 'b')
					{
						break;
					}
				}
				break;
			}
			cout << "ԭ���������£� ��š�ͼ�������ڼ�(ps:1�ڼ�0���ڼ�)" << endl;
			b->list();
			cout << "�����µ�ͼ������";
			cin >> bookname;
			b->setname(bookname); 
			cout << "���ĳɹ���" << endl;
			cout << "�� b ����ͼ��ά���˵�" << endl;
			while (cin >> c)
			{
				if (c == 'b')
				{
					break;
				}
			}
			break;
		case 3://ɾ����
			cout << "����ͼ���ţ�";
			cin >> bookid;
			b = query(bookid);
			if (b == NULL)
			{
				cout << "ɾ��ʧ�ܣ���ͼ�鲻���ڣ�" << endl;
				cout << "�� b ����ͼ��ά���˵�" << endl;
				while (cin >> c)
				{
					if (c == 'b')
					{
						break;
					}
				}
				break;
			}
			if (b->borrowbook() == 0)//��������
			{
				cout << "ɾ��ʧ�ܣ���ͼ�鱻�����ˣ�����ͼ��ݣ�" << endl;
				cout << "�� b ����ͼ��ά���˵�" << endl;
				while (cin >> c)
				{
					if (c == 'b')
					{
						break;
					}
				}
				break;
			}
			b->delbook();
			top--;
			cout << "��ɾ����" << endl;
			cout << "�� b ����ͼ��ά���˵�" << endl;
			while (cin >> c)
			{
				if (c == 'b')
				{
					break;
				}
			}
			break;
		case 4://����
			cout << "����ͼ���ţ�";
			cin >> bookid;
			b = query(bookid);
			if (b == NULL)
			{
				cout << "����ʧ�ܣ���ͼ�鲻���ڣ�" << endl;
				cout << "�� b ����ͼ��ά���˵�" << endl;
				while (cin >> c)
				{
					if (c == 'b')
					{
						break;
					}
				}
				break;
			}
			cout << "�ҵ��ˣ�" << endl;
			cout << "�������£� ��š�ͼ�������ڼ�(ps:1�ڼ�0���ڼ�)" << endl;
			b->list();
			cout << "�� b ����ͼ��ά���˵�" << endl;
			while (cin >> c)
			{
				if (c == 'b')
				{
					break;
				}
			}
			break;
		case 5://��ʾδɾ����
			cout << "��ǰ����" << top + 1 << "��" << endl;
			if (top + 1 != 0)
			{
				cout << "�������£� ��š�ͼ�������ڼ�(ps:1�ڼ�0���ڼ�)" << endl;
				list();
			}
			cout << "�� b ����ͼ��ά���˵�" << endl;
			while (cin >> c)
			{
				if (c == 'b')
				{
					break;
				}
			}
			break;
		case 6://�����
			clear();
			cout << "ȫɾ�ɹ�!" << endl;
			cout << "�� b ����ͼ��ά���˵�" << endl;
			while (cin >> c)
			{
				if (c == 'b')
				{
					break;
				}
			}
			break;
		case 0:
			break;
		default:
			cout << "�������!" << endl;
			Sleep(1000);
			break;
		} //end switch
	} //end while
}