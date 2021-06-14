//для заданного числа n найти ближайшее целое,которое делится на b.
//Если таких чисел несколько, то найти наибольшее. 
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
			cout << "Next INT is : " << second_int « endl;
			cout << "Result: " << first_int / second_int « endl;
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

//ввести катеты для нахождения гипотенузы

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c, S;
	setlocale(LC_ALL, "rus");
	cout << "катет а= ";
	cin >> a;
	cout << "катет b= ";
	cin >> b;
	S = sqrt(a * a + b * b);
	cout << " гипотенуза= " << S << endl;

	return 0;
}

//по введенным координатам двух точек вывести уравнение прямой ,проходящей через эти точки

#include <iostream>
using namespace std;

int main()
{
	int x1, y1, x2, y2, k, b, x, y;
	cin » x1 » y1 »x2»y2;
	k = (y2 - y1) / (x2 - x1);
	b = y2 - k * x2;
	cout << "y=" << k << "x+" << b;
	return 0;
}

//поментять значения а и в местами
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
	cout << " теперь a= " << a << endl;
	cout << " теперь b= " << b << endl;
	return 0;
}

//организаторам требуется красить баки циллиндрической формы при этом они красят только верхнюю часть....
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

//найти объем шара и площадь поверхности через радиус
#include <iostream>
using namespace std;
#include<cmath>
int main()
{
	float v, r, s;
	cout << "радиус: ";
	cin >> r;

	v = (4 / 3) * 3, 14 * r * r * r;
	s = 4 * 3, 14 * r * r;
	cout << " объем шара: " << v << endl;
	cout << " площадь поверхности: " << s << endl;
	return 0;
}

//найти объем и площадь поверхность прямого кругового конуса 
#include <iostream>
using namespace std;
#include<cmath>
int main()
{
	float l, r, s, h, v;
	cout << "радиус: ";
	cin >> r;
	cout << "длина: ";
	cin >> l;
	cout << "высота: ";
	cin >> h;
	s = 3, 14 * r * l + 3, 14 * r * r;
	v = (1 / 3) * 3 / 14 * r * r * h;
	cout << "площадь боковой поверхности: " << s << endl;
	cout << "объем прямого кругового конуса: " << v << endl;
	return 0;
}

//найти объем и площадь боковой поверхности 6-тиугольной пирамиды
#include <iostream>
using namespace std;
#include<cmath>
int main()
{
	double a, b, s, h, v;
	cout << "сторона основания : ";
	cin >> a;
	cout << "боковое ребро: ";
	cin >> b;
	s = (1 / 2) * (a * 6) * sqrt(b * b - (a / 2) * (a / 2));
	cout << " площадь боковой поверхности 6-тиугольной пирамиды: " << s << endl;
	cout«"высота : ";
	cin»h;
	v = (1 / 3) * (3 * a * sqrt(3) / 2) * h;
	cout << " объем 6-тиугольной пирамиды: " << v << endl;
	return 0;
}
сегодня


//Рассчитать месячные выплаты (m) и суммарную выплату (s) по кредиту.О кредите 
//известно, что он составляет n рублей, берется на y лет, под p процентов.
#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	float n, y, m, p, s;
	cout << ("Сумма кредита: ");
	cin >> n;
	cout << ("годы: ");
	cin >> y;
	cout << ("Процент: ");
	cin >> p;
	s = n + n * (p / 100) * y;
	m = s / y / 12;
	printf("Ежемесячные выплаты: %.0f руб.\nСуммарная выплата: %.0f руб.\n", m, s);
	return 0;
}