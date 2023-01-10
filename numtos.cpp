#include<string.h>

char *numtos(int num)
{
    char z;     //иничиализируем символ ведущего знака
    if (num < 0)
    {
        z = '-';        //если число отрицательное то z="-" и делаем число положительным
        num *= -1;
    }
    else if (num > 0)       //по сути оставляем без изменений
        z = '+';
    static char s[50];      //задаем массив для записи числа
    int i;
    s[49] = '\0';       //задаем последний символ нулевым
    for (i =48; i>0; i--)
    {
        s[i] ='0'+num%10;       //записываем число в строку посимвольно с конца
        num/=10;
        if (!num)       //когда число заканчивается цикл завержается
            break;
    }
    s[--i]=z;       //ставим в самом начале символ ведущего знака
    return s+i;     //возвращаем итоговую строку
}