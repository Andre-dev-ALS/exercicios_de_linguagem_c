#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char const *argv[])
{
    system("chcp 65001");
    system("cls");
    int valores[4];  int contador = 0
    ;

//  preenchendo o vetor 
    for(contador = 0; contador < 4; contador++  ){
        printf_s("digite o valor %i", + contador+1);
        scanf_s("%i", & valores[contador]);
    }

//  mostrando os valores dentro do vetor
for(contador = 0; contador  < 4; contador++){

printf_s("na  posição %i tem o valor %i \n", + contador+1, valores[contador]);
}

getch();
    return 0;
}
