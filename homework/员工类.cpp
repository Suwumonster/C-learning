#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
int num = 0;//Ա������
class Date
{
public:
	Date() :year(0), month(0), day(0) {};
	void SetYear(int y);
	void SetMonth(int m);
	void SetDay(int d);
	int GetYear();
	int GetMonth();
	int GetDay();
private:
	int year;
	int month;
	int day;
};
class employee
{
public:
	employee() :id(""), name(""), sex('u'), job("") {};
	void set();
	void show();
	friend int emp(employee& e, char n[20]);
private:
	char id[20];
	char name[20];
	char sex;
	Date date;
	char job[20];
};
employee em[50];
void employee::set()
{
	char i[20];
	char n[20];
	char s;
	int y1, m1, d1;
	char j[20];
	cin >> i >> n >> s;
	cin >> y1 >> m1 >> d1;
	cin >> j;
	strcpy(id, i);
	strcpy(name, n);
	sex = s;
	date.SetYear(y1);
	date.SetMonth(m1);
	date.SetDay(d1);
	strcpy(job, j);
}
void employee::show()
{
	cout << "���:" << id << '\t';
	cout << "����:" << name << '\t';
	cout << "�Ա�:" << sex << '\t';
	cout << "��������:" << date.GetYear() << "��" << date.GetMonth() << "��" << date.GetDay() << "��" << '\t';
	cout << "ְλ:" << job << endl;
}
int emp(employee&e,char n[20])
{
	if ((strcmp(e.id, n) == 0) || (strcmp(e.name, n) == 0))
	{
		cout << "�ҵ��ˣ�" << endl;
		e.show();
		return 1;
	}
	else
	{
		return 0;
	}
}
void Date::SetYear(int y)
{
	year = y;
}
void Date::SetMonth(int m)
{
	month = m;
}
void Date::SetDay(int d)
{
	day = d;
}
int Date::GetYear()
{
	return year;
}
int Date::GetMonth()
{
	return month;
}
int Date::GetDay()
{
	return day;
}
int main()
{
	int k;
	while (1)
	{
		cout << "ѡ��:" << endl;
		cout << "1.¼��/�޸�Ա����Ϣ" << endl;
		cout << "2.չʾԱ����Ϣ" << endl;
		cout << "3.ͨ�����/�����鿴Ա����Ϣ" << endl;
		cout << "0.�˳�����" << endl;
		cin >> k;
		if (k == 0)
		{
			break;
		}
		else if (k == 1)
		{
			int j;
			cout << "��ǰԱ����Ŀ:" << num << endl;
			cout << "�޸�/����ڼ�λԱ������Ϣ?(����<=50��<=(Ա����Ŀ+1))" << endl;
			cin >> j;
			if (j <= 50 && j <= num + 1)
			{
				cout << "�ֱ������š��������Ա�(m/w)����������(xxxx xx xx)��ְλ" << endl;
				em[j - 1].set();
				num++;
			}
			else
			{
				cout << "��������������Ϲ��" << endl;
			}
		}
		else if (k == 2)
		{
			if (num == 0)
			{
				cout << "����Ա����Ϣ" << endl;
			}
			else
			{
				int count = 0;
				for (count = 0; count < num; count++)
				{
					em[count].show();
				}
			}
		}
		else if (k == 3)
		{
			cout << "�������������߱��:";
			char temp[20];
			cin >> temp;
			int i = 0;
			for (i = 0; i < num; i++)
			{
				if (emp(em[i], temp))
				{
					break;
				}
			}
			if (i == num)
			{
				cout << "���޴���" << endl;
			}
		}
	}
	return 0;
}