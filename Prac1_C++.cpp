//�������� 4 ���������� � ������� ������ ������ � ���������� ������������ ������ 
//� ��� ��������.����� ����� ���������� �� ������.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
       int digit = 0;
    double digit2 = 0;
    char symbol = 0;
    bool TrueOrFalse = 0;
    cout << "������� ����� �����:" << endl;
    cin >> digit;
    cout << "������� ������������ �����:" << endl;
    cin >> digit2;
    cout << "������� ������:" << endl;
    cin >> symbol;
    cout << "������� 0, 1:" << endl;
    cin >> TrueOrFalse;
    cout << endl << endl;
    cout << "����� �����:" << digit << endl;
    cout << "������������:" << digit2 << endl;
    cout << "������:" << symbol << endl;
    cout << "0,1:" << TrueOrFalse << endl;
    return 0;
}
//�������� 5 ���������� ���� char, ������� ����� �� ���� ���� � �������� ��� ������� �� �����.

    {
    setlocale(LC_ALL, "rus")
        char a = 0, b = 0, c = 0, d = 0, e = 0;
    cout << "����� �� 5 ����:" << endl;
    cin >> a >> b >> c >> d >> e >> endl;
    return 0;
    }
//������������ ������ ������ 2 �����, ��� ���� �������� �� ������ ������������, 
//�����, ��������, ������� �������������� ���� �����.
#include <iostream>
using namespace std;

{
    setlocale(LC_ALL, "rus")
        int a, b;
    cout << "������� �" << endl;
    cin >> a;
    cout << "������� b" << endl;
    cin >> b;
    cout << "�����=" << a + b << endl;
    cout << "��������=" << a - b << endl;
    cout << "������������=" << a * b << endl;
    cout << "������� ��������������=" << (float)(a + b) / 2 << endl;
    return 0;
}
//����� ���� n ������ � m ������, ������� ��������� �� ���� �������. ��� ���������
//���������� ������������ ���-�� ������ , ������� �������������� �������� � ����� ������.
#include <iostream>
using namespace std;

{
    setlocale(LC_ALL, "rus")
        int m, n;
    cout << "������� ���-�� ������ " << endl;
    cin >> m;
    cout << "������� ���-�� ������" << endl;
    cin >> n;
    cout << "���������� ������, ������� �������������� �������� � ����� ������" << (m + n - 1) / n << endl;
    return 0;
}
//����� �������� ������� fx=x?2+3x-100. �������� � �������� � ����������.
#include <iostream>
using namespace std;

{
    int x, fx;
    cin >> x;
    fx = x * x + 3 * x - 100;
    count << fx;
    return 0;
}
//���� ������� ��������, ����� ������� � ��������.
#include <iostream>
using namespace std;

{
    int a;
    cout << "������� �" << endl;
    cin >> a, b, c;
    out << "�������=" << a * a << endl;
    cout << "��������=" << a + a + a + a << endl;
    return 0;
}
//���� ��� ����� a � b, �������� ���������� ������������ � �������� ��������.
#include <iostream>
using namespace std;
#include <stdio.h>
#include <math.h>

{
    double a, b;
    cin >> a >> b;
    double c = sqrt(a * a + b * b);
    cout << c << endl;
    return 0;
}
//n ���������� ����� k ����� �������, ����������� ������� �������� � �������, 
//������� ����� ��������� ������� ���������? �� �����  n � k ������ ������� 
//������� ���������� �����.
#include <iostream>
using namespace std;

{
    int n, k;
    cin >> n >> k;
    cout << "� ����������" << n / k << endl;
    cout << " � �������" << n % k << endl;
    return 0;
}