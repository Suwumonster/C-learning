#define _CRT_SECURE_NO_WARNINGS 1
#include "stdafx.h"
#include<fstream>
#include"rdatabase.h"
RDatabase::RDatabase()
{
	Reader s;
	top = -1;
	ifstream file;
	file.open("reader.dat", ios::in | ios::binary);
	while (1)
	{
		file.read((char*)&s, sizeof(s));
		if (!file)
		{
			break;
		}
		top++;
		read[top] = s;
	}
	file.close();
}
void RDatabase::clear()
{
	int k = 0;
	for (int i = 0; k < top; i++)
	{
		if (read[i].getnote() == 0)
		{
			read[i].delreader();
			k++;
		}
	}
	top = -1;
}
Reader* RDatabase::query(int readerid)
{
	int k = 0;
	for (int i = 0; k <= top; i++)
	{
		if (read[i].getnote() == 0)
		{
			if (read[i].getnumber() == readerid)
			{
				return &read[i];
			}
			k++;
		}
	}
	return NULL;
}
int RDatabase::addreader(int n, char* na)
{
	Reader* p = query(n);
	if (p == NULL)
	{
		int k = 0;
		for (int i = 0; k < top; i++)
		{
			if (read[i].getnote() == 1)
			{
				read[i].addreader(n, na);
				top++;
				return 1;
			}
			else
			{
				k++;
			}
		}
		top++;
		read[top].addreader(n, na);
		return 1;
	}
	return 0;
}
void RDatabase::list()
{
	int k = 0;
	for (int i = 0; k <= top; i++)
	{
		if (read[i].getnote() == 0)
		{
			read[i].list();
			k++;
		}
	}
}
RDatabase::~RDatabase()
{
	fstream file;
	file.open("reader.dat", ios::out | ios::binary);
	int k = 0;
	for (int i = 0; k <= top; i++)
	{
		if (read[i].getnote() == 0)
		{
			file.write((char*)&read[i], sizeof(read[i]));
			k++;
		}
	}
	file.close();
}
void RDatabase::readerdata()
{
	int choice = 1;
	char readername[20];
	int readerid;
	char c;
	int temp;
	Reader* r;
	while (choice != 0)
	{
		system("cls");
		cout << "����ά����" << endl;
		cout << "------------------------------------------------------" << endl;
		cout << "1:���� 2������ 3��ɾ�� 4������ 5����ʾ 6��ȫɾ 0���˳������˵�" << endl;
		cin >> choice;
		cout << "------------------------------------------------------" << endl;
		switch (choice)
		{
		case 1:
			cout << "������߱�ţ�";
			cin >> readerid;
			cout << "�������������";
			cin >> readername;
			temp = addreader(readerid, readername); 
			if (temp)
			{
				cout << "���ӳɹ���" << endl;
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
			cout << "���д˶��ߣ�����ʧ�ܣ�" << endl;
			cout << "�� b ����ͼ��ά���˵�" << endl;
			while (cin >> c)
			{
				if (c == 'b')
				{
					break;
				}
			}
			break;
		case 2:
			cout << "������߱�ţ�";
			cin >> readerid;
			r = query(readerid);
			if (r == NULL)
			{
				cout << "�ö��߲����ڣ�" << endl;
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
			cout << "ԭ��Ϣ���£�" << endl;
			cout << "���    ����" << endl;
			r->list();
			cout << "�����µ�������";
			cin >> readername;
			r->setname(readername); 
			cout << "�޸ĳɹ���" << endl;
			cout << "�� b ����ͼ��ά���˵�" << endl;
			while (cin >> c)
			{
				if (c == 'b')
				{
					break;
				}
			}
			break;
		case 3:
			cout << "������߱�ţ�";
			cin >> readerid;
			r = query(readerid);
			if (r == NULL)
			{
				cout << "�ö��߲����ڣ�" << endl;
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
			if (r->check())//������û��
			{
				cout << "ע��ʧ�ܣ��ö�������δ����" << endl;
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
			r->delreader();
			top--;
			cout << "ɾ�����߳ɹ���" << endl;
			cout << "�� b ����ͼ��ά���˵�" << endl;
			while (cin >> c)
			{
				if (c == 'b')
				{
					break;
				}
			}
			break;
		case 4:
			cout << "������߱�ţ�";
			cin >> readerid;
			r = query(readerid);
			if (r == NULL)
			{
				cout << "�ö��߲����ڣ�" << endl;
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
			cout << "��Ϣ���£�" << endl;
			cout << "���    ����" << endl;
			r->list(); 
			cout << "�� b ����ͼ��ά���˵�" << endl;
			while (cin >> c)
			{
				if (c == 'b')
				{
					break;
				}
			}
			break;
		case 5:
			cout << "��ǰ������" << top + 1 << "��" << endl;
			if (top + 1 != 0)
			{
				cout << "���    ����" << endl;
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
		case 6:
			clear();
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