#include <iostream>

//9.Идет k-я секунда суток. Определить, сколько целых часов и целых минут прошло с начала суток.

double Minutes(int k) // функция расчета минут
{
    double minutes;
    minutes = k / 60;
    return minutes;
}

double Hours(int k) // функция расчета количнства секунд в 1 часе
{
    double hours;
    hours = k / 3600;
    return hours;
}


int main() {
    int k;

    //ввод данных от пользователя (количество секунд)
    std::cout << "Enter seconds: " << std::endl;
    std::cin >> k;

    //вывод результата (колличество часов и минут)
    std::cout << << " hour : " << Hours() << std::endl;
    std::cout << << " min : " << Minutes() << std::endl;
    return 0;
}
