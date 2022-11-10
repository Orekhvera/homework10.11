//7. Найти корни квадратного уравнения.


int discr(int a, int b, int c) //функция подсчета дискриминанта квадратного уравнения
{
   int diskr;
   diskr = a * a - 4 * b * c; //формула нахождения дискриминанта
   return diskr;
}

double root1(double a, double b, double c) //функция подсчета первгого корня квадратного уравнения
{
    double root1;
    root1 = (((-b) + sqrt(discr(a, b, c))) / (2 * a)); //формула расчета первого корня квадратного уравнения
    return root1;
}

 double root2(double a, double b, double c) //функция подсчета второго корня квадратного уравнения
{
    double root2;
    root2 = (((-b) - sqrt(discr(a, b, c))) / (2 * a)); //формула расчета первого корня квадратного уравнения
    return root2;
}

int main()
{
 double a;
 double b;
 double c;
 double x1;

 //ввод данных от пользователя
 std::cout << "Enter a: ";
 std::cin >> a;

 std::cout << "Enter b: ";
 std::cin >> b;

 std::cout << "Enter c: ";
 std::cin >> c;


 int D = discr();
 double x1 = -(b / (2 * a));

//рассматриваем различные исходы для возможных значений дискриминанта
  if (D > 0) // Условие при дискриминанте больше нуля
 {
  std::cout << "x1 = " << root1() << std::endl;
  std::cout << "x2 = " << root2() << std::endl;
 }
  if (D == 0) // Условие для дискриминанта равного нулю
 {
  std:: cout << "x1 = x2 = " << x1 << std::endl;
 }
  if (D < 0)// Условие при дискриминанте меньше нуля
  {
  std::cout << "D < 0, error" << std::endl;
 }
}
