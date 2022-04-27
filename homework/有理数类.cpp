#include <iostream>
#include <cmath>
using namespace std;
class Rational
{
public:
	Rational();
	void set(int,int);//���÷��ӷ�ĸ
	friend Rational operator+(const Rational& a, const Rational& b);//�Ӻ�����
	friend Rational operator-(Rational& a,  Rational& b);//��������
	friend Rational operator*(const Rational& a, const Rational& b);//�˺�����
	friend Rational operator/(const Rational& a, const Rational& b);//��������
	friend ostream& operator<<(ostream& output,Rational& a);//���������
	friend istream& operator>>(istream& intput,Rational& a);//����������
private:
	int numerator;//����
	int denominator;//��ĸ
};
Rational::Rational()
{
	numerator = 0;
	denominator = 1;
}
void Rational::set(int x, int y)//���÷��ӷ�ĸ
{
	numerator = x;
	denominator = y;
}
Rational operator+(const Rational& a, const Rational& b)
{
	Rational c;
	if (a.denominator == 0 || b.denominator == 0)
	{
		c.set(0, 0);
		return c;
	}
	else if (a.numerator == 0)
	{
		return b;
	}
	else if (b.numerator == 0)
	{
		return a;
	}
	c.set(a.numerator + b.numerator,a.denominator + b.denominator);
	return c;
}
Rational operator-( Rational& a, Rational& b)
{
	Rational c;
	if (a.denominator == 0 || b.denominator == 0)
	{
		c.set(0, 0);
		return c;
	}
	else if (a.numerator == 0)
	{
		b.numerator = -(b.numerator);
		return b;
	}
	else if (b.numerator == 0)
	{
		return a;
	}
	c.set(a.numerator - b.numerator,a.denominator - b.denominator);
	return c;
}
Rational operator*(const Rational& a, const Rational& b)
{
	Rational c;
	if (a.denominator == 0 || b.denominator == 0)
	{
		c.set(0, 0);
		return c;
	}
	else if (a.numerator == 0 || b.numerator == 0)
	{
		c.set(0, 1);
		return c;
	}
	c.set(a.numerator * b.numerator,a.denominator * b.denominator);
	return c;
}
Rational operator/(const Rational& a, const Rational& b)
{
	Rational c;
	if (a.denominator == 0 || b.numerator == 0)
	{
		c.set(0, 0);
		return c;
	}
	else if (a.numerator == 0 || b.denominator == 0)
	{
		c.set(0, 1);
		return c;
	}
	c.set(a.numerator * b.denominator,a.denominator * b.numerator);
	return c;
}
ostream& operator<<(ostream& output,Rational& a)
{
	if (a.denominator == 0)//��ĸΪ0ʱ
	{
		output << "�����";
		return output;
	}
	else if(a.numerator == 0)//����Ϊ0ʱ
	{
		output << "0";
		return output;
	}
	else
	{
		if (a.denominator * a.numerator > 0)//���ӷ�ĸͬ��
		{
			output << abs(a.numerator) << "/" << abs(a.denominator);
		}
		else//���
		{
			output << "-" << abs(a.numerator) << "/" << abs(a.denominator);
		}
		return output;
	}
}
istream& operator>>(istream& intput,Rational& a)
{
	intput >> a.numerator >> a.denominator;
	return intput;
}


int main()
{
	Rational a, b, s;
	cout << "������������(��ʽ������ ��ĸ)" << endl;
	cin >> a;
	cin >> b;
	s = a + b;
	cout << " a + b = " << s << endl;
	s = a - b;
	cout << " a - b = " << s << endl;
	s = a * b;
	cout << " a * b = " << s << endl;
	s = a / b;
	cout << " a / b = " << s << endl;
	return 0;
}