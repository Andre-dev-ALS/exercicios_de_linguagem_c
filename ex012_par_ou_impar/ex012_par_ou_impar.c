#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    system("chcp 65001");
    system("cls");
    int valor = 0;

    printf_s("Digite um valor para descobrir se ele é par ou ímpar \n precione 0 ou digite um valor negativo para sair");
    scanf_s("%i", & valor);

    while (valor  > 0 )
    {
        if(valor % 2 == 0)
{
printf_s("O valor %i é par \n", + valor);
}
else{
    printf_s("O valor %i é ímpar \n", + valor);
}

printf_s("Digite um valor para descobrir se ele é par ou ímpar \n precione 0 ou digite um valor negativo para sair");
    scanf_s("%i", & valor);
    }

getch();    
    return 0;
}
