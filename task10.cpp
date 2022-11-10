//10. Определить, является ли треугольник со сторонами a, b, c равнобедренным.


double isosTriangle(double a, double b, double c)  //
{
    if (a == b || a == c || b == c)
        return true;
    else
        return false;
}


int main()
{
    double side1;
    double side2;
    double side3;

    //ввод значений сторон треугольника от пользователя
    std::cout << "Enter the value of the first side of the triangle: ";
    std::cin >> side1;

    std::cout << "Enter the value of the second side of the triangle: ";
    std::cin >> side2;

    std::cout << "Enter the value of the third side of the triangle: ";
    std::cin >> side3;

    //вывод результата

    if (isosTriangle(side1, side2, side3)) {
        std::cout << "The triangle is isosceles";
    } else {
        std::cout << "The triangle is not isosceles";
    }

    return 0;
}
