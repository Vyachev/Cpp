//��� ��������� ����� n ����� ��������� �����,������� ������� �� b.
//���� ����� ����� ���������, �� ����� ����������. 
#include <iostream> 
using namespace std;

void getNextInt(int first_int, int second_int)
{
	int second_int_tmp = second_int;
	int count_p = 0;
	int count_n = 0;
	while (!(first_int % second_int == 0))
	{
		second_int++;
		count_p++;
	}
	while (!(first_int % second_int_tmp == 0))
	{
		second_int_tmp--;
		count_n++;
	}
	if (count_p < count_n)
	{
		if (count_p > 0 && count_n > 0)
		{
			cout << "Next INT is : " << second_int � endl;
			cout << "Result: " << first_int / second_int � endl;
		}
		else
		{
			cout << "Result: " << first_int / second_int << endl;
		}
	}
	else
	{
		if (count_p > 0 && count_n > 0)
		{
			cout << "Next INT is : " << second_int_tmp << endl;
			cout << "Result: " << first_int / second_int_tmp << endl;
		}
		else
		{
			cout << "Result: " << first_int / second_int_tmp << endl;
		}
	}
}
int main()
{
	int dig_1;
	int dig_2;
	cout << "=" << endl;
	cin >> dig_1;
	cin >> dig_2;
	getNextInt(dig_1, dig_2);
}

//������ ������ ��� ���������� ����������

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c, S;
	setlocale(LC_ALL, "rus");
	cout << "����� �= ";
	cin >> a;
	cout << "����� b= ";
	cin >> b;
	S = sqrt(a * a + b * b);
	cout << " ����������= " << S << endl;

	return 0;
}

//�� ��������� ����������� ���� ����� ������� ��������� ������ ,���������� ����� ��� �����

#include <iostream>
using namespace std;

int main()
{
	int x1, y1, x2, y2, k, b, x, y;
	cin � x1 � y1 �x2�y2;
	k = (y2 - y1) / (x2 - x1);
	b = y2 - k * x2;
	cout << "y=" << k << "x+" << b;
	return 0;
}

//��������� �������� � � � �������
#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	float a, b;
	cout << "a= ";
	cin >> a;
	cout << "b=";
	cin >> b;

	int tmp;

	tmp = a;
	a = b;
	b = tmp;
	cout << " ������ a= " << a << endl;
	cout << " ������ b= " << b << endl;
	return 0;
}

//������������� ��������� ������� ���� ��������������� ����� ��� ���� ��� ������ ������ ������� �����....
#include <iostream>
using namespace std;
main()
{
	int r, h, s, v, c;
	cin >> r >> h >> v >> c;
	s = asin(0) * r * r + 2 * r * h * asin(0);
	cout << ceil(v / c);

	return 0;
}

//����� ����� ���� � ������� ����������� ����� ������
#include <iostream>
using namespace std;
#include<cmath>
int main()
{
	float v, r, s;
	cout << "������: ";
	cin >> r;

	v = (4 / 3) * 3, 14 * r * r * r;
	s = 4 * 3, 14 * r * r;
	cout << " ����� ����: " << v << endl;
	cout << " ������� �����������: " << s << endl;
	return 0;
}

//����� ����� � ������� ����������� ������� ��������� ������ 
#include <iostream>
using namespace std;
#include<cmath>
int main()
{
	float l, r, s, h, v;
	cout << "������: ";
	cin >> r;
	cout << "�����: ";
	cin >> l;
	cout << "������: ";
	cin >> h;
	s = 3, 14 * r * l + 3, 14 * r * r;
	v = (1 / 3) * 3 / 14 * r * r * h;
	cout << "������� ������� �����������: " << s << endl;
	cout << "����� ������� ��������� ������: " << v << endl;
	return 0;
}

//����� ����� � ������� ������� ����������� 6-���������� ��������
#include <iostream>
using namespace std;
#include<cmath>
int main()
{
	double a, b, s, h, v;
	cout << "������� ��������� : ";
	cin >> a;
	cout << "������� �����: ";
	cin >> b;
	s = (1 / 2) * (a * 6) * sqrt(b * b - (a / 2) * (a / 2));
	cout << " ������� ������� ����������� 6-���������� ��������: " << s << endl;
	cout�"������ : ";
	cin�h;
	v = (1 / 3) * (3 * a * sqrt(3) / 2) * h;
	cout << " ����� 6-���������� ��������: " << v << endl;
	return 0;
}
�������


//���������� �������� ������� (m) � ��������� ������� (s) �� �������.� ������� 
//��������, ��� �� ���������� n ������, ������� �� y ���, ��� p ���������.
#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	float n, y, m, p, s;
	cout << ("����� �������: ");
	cin >> n;
	cout << ("����: ");
	cin >> y;
	cout << ("�������: ");
	cin >> p;
	s = n + n * (p / 100) * y;
	m = s / y / 12;
	printf("����������� �������: %.0f ���.\n��������� �������: %.0f ���.\n", m, s);
	return 0;
}