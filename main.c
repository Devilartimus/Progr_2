#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "upper.cpp"        //подключение файла подфункции первого задания
#include "stonum.cpp"       //подключение файла подфункции второго задания
#include "numtos.cpp"       //подключение файла подфункции третьего задания
#include "bintodec.cpp"     //подключение файла подфункции четвертого задания

int main()
{
    char str[50];      //инициализация строки
    //выполнение 1 задания
    printf("Task 1:\n");
    printf("Enter the line of the symbols (lowercase letters): \n");
    gets(str);      //ввод строки
    char *STR=stoupper(str);
    puts(STR);            //вывод строки заглавными буквами
    //выполнение 2 задания
    printf("\n\nTask 2:\n");
    printf("Enter the line of the symbols (any positive or negative number): \n");
    gets(str);      //ввод строки
    printf("%d", stonum(str));
    //выполнение 3 задания
    printf("\n\nTask 3:\n");
    printf("Enter any number: \n");
    int num;
    scanf("%d", &num);
    puts(numtos(num));
    //Выполнение 4 задания
    printf("\n\nTask 4:\n");
    printf("Enter the line of the symbols (binary numbers): \n");
    gets(str);      //ввод строки
    puts(bintodec(str));        //вывод итогового десятичного числа
    return 0;
}
