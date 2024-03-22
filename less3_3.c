// Ввести три числа и определить, верно ли, что они вводились в порядке
// возрастания.
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a, b, c;
    printf("Введите 5 целых числа через пробел: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a<b && b<c) 
        printf("Yes\n");
    else
        printf("No\n");
return 0;
}