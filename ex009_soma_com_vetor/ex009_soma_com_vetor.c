#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char const *argv[])
{
    system("chcp 65001");
    system("cls");

    int tamanho =0, valor = 0, contador = 0, soma = 0; 

//perguntando ao  usuário  o tamanho do vetor

printf_s("Digite o tamanho do vetor");
scanf_s("%i", & tamanho);
int valores[tamanho];
// recebemdo os  valores do usuário e colocando no vetor
for(contador = 0; contador <    tamanho; contador++){
    printf_s("Digite o valor %i de %i valores", + contador+1,tamanho);
    scanf_s("%i", & valores[contador]);

// somando os valores de todos os      índices do vetor
    soma = soma + valores[contador];
}

printf_s("A soma dos valores digitados é de %d", + soma);

getch();

return 0;
}