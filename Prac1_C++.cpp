//создайте 4 переменные с разными типами данных и предложите пользователю ввести 
//в них значени€.ѕосле ввода отобразите на экране.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
       int digit = 0;
    double digit2 = 0;
    char symbol = 0;
    bool TrueOrFalse = 0;
    cout << "введите целое число:" << endl;
    cin >> digit;
    cout << "введите вещественное число:" << endl;
    cin >> digit2;
    cout << "введите символ:" << endl;
    cin >> symbol;
    cout << "введите 0, 1:" << endl;
    cin >> TrueOrFalse;
    cout << endl << endl;
    cout << "целое число:" << digit << endl;
    cout << "вещественное:" << digit2 << endl;
    cout << "символ:" << symbol << endl;
    cout << "0,1:" << TrueOrFalse << endl;
    return 0;
}
//создайте 5 переменных типа char, введите слово из п€ти букв и покажите эти символы на экран.

    {
    setlocale(LC_ALL, "rus")
        char a = 0, b = 0, c = 0, d = 0, e = 0;
    cout << "слово из 5 букв:" << endl;
    cin >> a >> b >> c >> d >> e >> endl;
    return 0;
    }
//пользователь должен ввести 2 числа, вам надо показать на экране произведение, 
//сумму, разность, среднее арифметическое этих чисел.
#include <iostream>
using namespace std;

{
    setlocale(LC_ALL, "rus")
        int a, b;
    cout << "введите а" << endl;
    cin >> a;
    cout << "введите b" << endl;
    cin >> b;
    cout << "сумма=" << a + b << endl;
    cout << "разность=" << a - b << endl;
    cout << "произведение=" << a * b << endl;
    cout << "среднее арифметическое=" << (float)(a + b) / 2 << endl;
    return 0;
}
//пусть есть n клеток и m зайцев, которых рассадили по этим клеткам. ¬ам требуетс€
//рассчитать максимальное кол-во зайцев , которое гарантированно окажутс€ в одной клетке.
#include <iostream>
using namespace std;

{
    setlocale(LC_ALL, "rus")
        int m, n;
    cout << "введите кол-во клеток " << endl;
    cin >> m;
    cout << "введите кол-во зайцев" << endl;
    cin >> n;
    cout << "количество зайцев, которое гарантированно окажетс€ в одной клетке" << (m + n - 1) / n << endl;
    return 0;
}
//найти значение функции fx=x?2+3x-100. «начение х вводитс€ с клавиатуры.
#include <iostream>
using namespace std;

{
    int x, fx;
    cin >> x;
    fx = x * x + 3 * x - 100;
    count << fx;
    return 0;
}
//дана сторона квадрата, найти площадь и периметр.
#include <iostream>
using namespace std;

{
    int a;
    cout << "введите а" << endl;
    cin >> a, b, c;
    out << "площадь=" << a * a << endl;
    cout << "периметр=" << a + a + a + a << endl;
    return 0;
}
//дано два числа a и b, выведите гипотенузу треугольника с задаными катетами.
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
//n школьников дел€т k €блок поровну, недел€щийс€ остаток остаетс€ в корзине, 
//сколько €блок достаетс€ каждому школьнику? на входе  n и k должны вывести 
//искомое количество €блок.
#include <iostream>
using namespace std;

{
    int n, k;
    cin >> n >> k;
    cout << "у школьников" << n / k << endl;
    cout << " в корзине" << n % k << endl;
    return 0;
}