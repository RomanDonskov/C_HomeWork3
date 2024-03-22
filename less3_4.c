// Ввести номер месяца и вывести название времени года.
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Rus");
    char a;
    printf("Введите номер месяца - целое числло от 1 до 12: ");
    scanf("%d", &a);
    if (a<=12 && a>=1) 
        {
            if ((a>=1 && a<3)||a==12)
                printf("winter");
            else if (a>=3 && a<6)
                printf("spring");
            else if (a>=6 && a<9)
                printf("summer");
            else if (a>=9 && a<12)
                printf("autumn");   
        }
    else
        printf("неверный номер месяца!");
return 0;
}