// Ввести пять чисел и вывести наибольшее из них
// Нужно напечатать наибольшее число

#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a, b, c, d, e,res;
    printf("Введите 5 целых числа через пробел: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if (a>=b && a>=c && a>=d && a>=e) res = a;
        else if (b>=a && b>=c && b>=d && b>=e) res = b;
        else if (c>=a && c>=b && c>=d && c>=e) res = c;
        else if (d>=a && d>=b && d>=c && d>=e) res = d;
        else if (e>=a && e>=b && e>=c && e>=d) res = e; 
    printf("Наибольшее из 5 чисел: %d", res);
    return 0;
}
