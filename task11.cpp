
//11. Вычислить стоимость покупки с учётом скидки. Скидка в 10% предоставляется, если сумма покупки превышает 1000 рублей.

int sale(int s) //функция для расчета скидки 
{
    int sale; 
    sale = s - s * 0.1 ; //формула расчета скидки 
    return sale;
}
int main()
{
    int s;
    
    //ввод данных от пользователя 
    std::cout << "Enter the sum of purchase: "; 
    std::cin >> s; 
    
    if (s >= 1000) {
        std::cout << "The price with sale = " << sale(s); //вывод итоговой цены с учетом скидки 
    }
    else {
        std::cout << "There is no sale";
    }
    return 0;
}
