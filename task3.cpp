#include <iostream>
#include <cmath>

//3. Вычислить площадь прямоугольного треугольника и гипотенузу.

double calculateS(double a, double b) //функция для подсчета площади прямоугольного треугольника S = Square of the triangle
{
    double s;
    s = 0.5 * (a * b) //формула нахождения площади прямоугольного треугольника
    return s;
}

double calculateHypotenuse(double a, double b, double c) //функция для подсчета гипотенузы
{
    double c;
    c = sqrt((a * a) + (b * b)) //формула нахождения гипотенузы
    return c;
}

int main()
{
    double a;
    double b;
    double c;

    //вводим значения катетов и гипотенузs прямоугольного треугольника
    std::cout << "Enter the first value of the side of the triangle: " << std::endl;
    std::cin >> a;

    std::cout << "Enter the second value of the side of the triangle: " << std::endl;
    std::cin >> b;

    std::cout << "Enter the value of hypotenuse : " << std::endl;
    std::cin >> c;

    //выводим подсчитанное значение площади прямоугольного треугольника
    std::cout << "Square of the triangle =" << calculateS(double a, double b) << std::endl;

    //выводим подсчитанное значение гипотенузы
    std::cout << "Value of the hypotenuse =" << calculateHypotenuse(double a, double b, double c) << std::endl;

    return 0;
}
