#include <string.h>

char *stoupper (char *str)
{
    char *STR;      //инициализируем строку для перезаписи изначального
    STR=str;        //задаем длинну равную изначальному
    for (size_t i=0; i<strlen(str); i++)        //через цикл проходим по всей стркое
    {
        if (str[i]!=' ')        //проверяем на наличие пробела, если он есть, то переходим к следующему символу
            STR[i]=str[i]-32;   //разница м-ду записью строчной и заглавной буквы в 32 (запись буквы это набор цифр)
        else
            continue;
    }
    return STR;     //возвращаем строку
}