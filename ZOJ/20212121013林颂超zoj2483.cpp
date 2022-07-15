#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int compete(const string s)
{
	stack <int> st;
	stack <char> com;
	char in;
	for (int i = 0; i < s.size() ; i++)
	{
		in = s[i];
		if (in == ' ')//�ո�����
		{
			continue;
		}
		else if (in == 'V')//����V
		{
			st.push(1);
		}
		else if (in == 'F')//����F
		{
			st.push(0);
		}
		else if (in == ')' && !com.empty())//���յ�)����ʼ����
		{
			while (!com.empty())//�����ջ���վ���
			{
				char temp = com.top();
				com.pop();
				int x, y;
				if (temp == '(')//����������ѭ��
				{
					break;
				}
				else if (temp == '!')
				{
					x = st.top();
					st.pop();
					x = !x;
					st.push(x);
				}
				else if (temp == '&')
				{
					x = st.top();
					st.pop();
					y = st.top();
					st.pop();
					x = x && y;
					st.push(x);
				}
				else if (temp == '|')
				{
					x = st.top();
					st.pop();
					y = st.top();
					st.pop();
					x = x || y;
					st.push(x);
				}
			}
		}
		else if (in == '!')//���յ� !
		{
			if (s[i + 1] == 'V' || s[i + 1] == 'F')
			{
				int x = ((s[i + 1] == 'V') ? 1 : 0);
				x = !x;
				st.push(x);
				i++;
			}
			else
			{
				com.push(in);//��! ���� com ջ��
			}
		}
		else if (in == '(')//���յ���
		{
			com.push(in);
		}
		else if (in == '&' || in == '|')//���յ� & �� |
		{
			while (!com.empty() && com.top() == '!')//�Ƚ� �� ���������
			{
				com.pop();
				int x = st.top();
				st.pop();
				x = !x;
				st.push(x);
			}
			if (in == '&')// ���յ� &
			{
				if (!com.empty() && com.top() != '(')
				{
					char temp;
					temp = com.top();
					int x, y;
					if (temp == '&')
					{
						com.pop();
						x = st.top();
						st.pop();
						y = st.top();
						st.pop();
						x = x && y;
						st.push(x);
					}
				}
				com.push(in);//�����ջ�ղ��ն���Ҫ�� & ���� com ջ��
			}
			else if (in == '|')// ���յ� |
			{
				if (!com.empty() && com.top() != '(')
				{
					char temp;
					temp = com.top();
					com.pop();
					int x, y;
					if (temp == '&')
					{
						x = st.top();
						st.pop();
						y = st.top();
						st.pop();
						x = x && y;
						st.push(x);
					}
					else if (temp == '|')
					{
						x = st.top();
						st.pop();
						y = st.top();
						st.pop();
						x = x || y;
						st.push(x);
					}
				}
				com.push(in);//�����ջ�ղ��ն���Ҫ�� | ���� com ջ��
			}
		}
	}
	while (!com.empty())
	{
		char temp;
		temp = com.top();
		com.pop();
		int x, y;
		if (temp == '!')
		{
			x = st.top();
			st.pop();
			x = !x;
			st.push(x);
		}
		if (temp == '&')
		{
			x = st.top();
			st.pop();
			y = st.top();
			st.pop();
			x = x && y;
			st.push(x);
		}
		else if (temp == '|')
		{
			x = st.top();
			st.pop();
			y = st.top();
			st.pop();
			x = x || y;
			st.push(x);
		}
	}
	int x = st.top();
	st.pop();
	return x;
}
int main()
{
	string s;
	int i = 1;
	while (getline(cin, s))
	{
		int num = compete(s);
		if (num == 1)
		{
			cout << "Expression " << i++ << ": V" << endl;
		}
		else
		{
			cout << "Expression " << i++ << ": F" << endl;
		}
	}
	return 0;
}