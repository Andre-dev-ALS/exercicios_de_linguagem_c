#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    system("chcp 65001");
    system("cls");

int valor1 = 0, valor2 = 0;


printf_s("Digite o primeiro valor \n");
scanf_s("%i", & valor1);

printf_s("Digite o segundo valor");
scanf_s("%i", & valor2);

if(valor1 > valor2){
printf_s("O primeiro valor digitado é o maior");
}
else{
    if(valor2 > valor1){
        printf_s("O segundo valor digitado é o maior");
    }
    else
    printf_s("Os dois valores digitados são iguais");
}

getch();

    return 0;
}
