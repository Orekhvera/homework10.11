//5.Выполнить переход от декартовых координат к полярным.

#include <iostream>
#include <cmath>

double transformX(double r, double f) //функция преобразования одного типа координат в другой
{
    double x;
    x = r * cos(f); //формула преобразования одного типа координат в другой
    return x;
}

double transformY(double f)
{
    double y;
    y = sin(f); //формула преобразования одного типа координат в другой
    return y;
}

    int main()
    {
       double r;
       double f;

       //вводим числа
        std::cout << "Enter r: ";
        std::cin >> r;

        std::cout << "Enter f: ";
        std::cin >> f;

        //вывод результата
        std::cout << "X =" << transformX(double r, double f) << std::endl;
        std::cout << "Y =" << transformY(double f) << std::endl;

        return 0;
    }
