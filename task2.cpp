#include <iostream>

//2. Вычислить длину окружности и площадь круга радиуса г.
double calculateC(double pi, double r) //функция для подсчета длины окружности C = Circumference length
{
    double c;
    c = 2 * pi * r //формула нахождения длины окружности
    return c;
}

double calculateS(double pi, double r) //функция для подсчета площади круга
{
    double s;
    s = pi * r * r //формула нахождения площади круга
    return s;
}

int main()
{
    double pi = 3.14;
    double r;

    //вводим значения радиуса окружности
    std::cout << "Enter the value of the radius: " << std::endl;
    std::cin >> r;

    //выводим посчитанное значение длины окружности
    std::cout << "Circumference length =" << calculateC(double pi, double r) << std::endl;

    //выводим посчитанное значение площади круга
    std::cout << "Square of the circle=" << calculateS(double pi, double r) << std::endl;

    return 0;
}

