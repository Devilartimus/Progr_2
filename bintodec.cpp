#include <string.h>
#include <math.h>
#include<stdio.h>

char *bintodec ( char *bin )
{
    char *dec;      //инициализация строки dec
    dec=bin;        //задаем новому массиву длинну переданного
    int sum=0;
    int k, i=strlen(bin)-1;     //инициализируем переменную двоичного кода (1 или 0) и счетчик от максимального значния
    while(*bin)
    {
        if (*bin=='1')      //присваеваем к 1 или 0 в зависимости от символа строки
            k=1;
        if (*bin=='0')
            k=0;
        sum+=k*pow(2,i);        //считаем сумму (в int-e) и получаем десятичное число
        i--;
        bin++;
    }

    //записываем полученное десятичное число из int  в char
    dec[49]='\0';
    for(i=48; i>0; i--)
    {
        dec[i]='0'+sum%10;
        sum/=10;
        if (!sum)
            break;
    }

    return dec+i;       //возвращаем итоговую строку
}
