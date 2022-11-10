#include <iostream>

//1.Вычислить площадь трапеции с основаниями b1 и b2 и высотой h.

double calculateS(double b1, double b2, double h) //функция для подсчета площади трапеции S = Square of trapezoid
{
    double s;
    s = h * ((b1 + b2) / 2); //формула нахождения площади трапеции
    return s;
}

int main()
{
    double b1;
    double b2;
    double h;

    //вводим значения осонований и высоты трапеции
    std::cout << "Enter the first value of the base of the trapezoid:" << std::endl;
    std::cin >> b1;

    std::cout << "Enter the second value of the base of the trapezoid" << std::endl;
    std::cin >> b2;

    std::cout << "Enter the value of the height of the trapezoid:" << std::endl;
    std::cin >> h;

    //выводим посчитанное значение площади трапеции
    std::cout << "Square of trapezoid =" << calculateS(double b1, double b2, double h) << std::endl;

    return 0;
}