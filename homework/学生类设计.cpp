#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int num = 0;//ѧ������
class Student
{
public:
	Student();
	void SetInfo(int i, char n[20], char s, char d[5], char g[20], char l[20], char sc[20], char m[20]);
	void show();
private:
	int id;
	char name[20];
	char sex;
	char date[5];
	char grade[20];
	char lesson[20];
	char school[20];
	char major[20];
};
Student stu[50];
Student::Student() :name(""),date(""),grade(""),school(""), lesson(""),major("")
{
	id = 0;
	sex = 'u';//unknown
}
void Student::SetInfo(int i, char n[20],char s,char d[5], char g[20],char l[20], char sc[20], char m[20])
{
	id = i;
	strcpy(name, n);
	sex = s;
	strcpy(date, d);
	strcpy(grade, g);
	strcpy(lesson, l);
	strcpy(school, sc);
	strcpy(major, m);
	num++;
}
void Student::show()
{
	int i = 0;
	if (num == 0)
	{
		cout << "����ѧ����Ϣ" << endl;
	}
	else
	{
		cout << left << setw(15) << "ѧ�� " << left << setw(15) << "���� " << left << setw(15) << "�Ա� ";
		cout << left << setw(15) << "�������� " << left << setw(15) << "�꼶 " << left << setw(15) << "�༶ ";
		cout << left << setw(15) << "ѧԺ " << left << setw(15) << "רҵ " << endl;
		for (i = 0; i < num; i++)
		{
			cout << left << setw(15) << stu[i].id;
			cout << left << setw(15) << stu[i].name;
			cout << left << setw(15) << stu[i].sex;
			cout << left << setw(15) << stu[i].date;
			cout << left << setw(15) << stu[i].grade;
			cout << left << setw(15) << stu[i].lesson;
			cout << left << setw(15) << stu[i].school;
			cout << left << setw(15) << stu[i].major << endl;
		}
	}
}
int main()
{
	int i;
	char n[20]; 
	char s; 
	char d[5]; 
	char g[20]; 
	char l[20]; 
	char sc[20]; 
	char m[20];
	int j;
	while (1)
	{
		cout << "ѡ��:" << endl;
		cout << "1.�鿴����ѧ����Ϣ" << endl;
		cout << "2.�޸�/����ѧ����Ϣ" << endl;
		cout << "0.�˳�����" << endl;
		cin >> j;
		if (j == 0)
		{
			break;
		}
		else if (j == 1)
		{
			stu[0].show();
		}
		else if (j == 2)
		{
			int k;
			cout << "��ǰѧ����Ŀ:" << num << endl;
			cout << "�޸�/����ڼ�λѧ������Ϣ?(����<=50��<=(ѧ����Ŀ+1))" << endl;
			cin >> k;
			if (k <= 50 && k <= num + 1)
			{
				cout << "�ֱ�����ѧ�š��������Ա�(m/w)����������(xxxx)���꼶���༶��Ժϵ��רҵ" << endl;
				cin >> i >> n >> s >> d >> g >> l >> sc >> m;
				stu[k - 1].SetInfo(i, n, s, d, g, l, sc, m);
			}
			else
			{
				cout << "��������������Ϲ��" << endl;
			}
		}
	}
	return 0;
}