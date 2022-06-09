#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
        system("chcp 65001");
system("cls");

        int dia = 0;

        printf_s("Digite um número de 1 a 7 para ver qual é o dia da semana dele");
        scanf_s("%i", & dia);
switch (dia){

        case 1:
        printf_s("O dia da semana é domingo");
        break;
        case 2:
        printf_s("O dia da semana é segunda-feira");
        break;
        case 3:
        printf_s("O dia da semana é terça-feira");
        break;
        case 4:
        printf_s("O dia da semana é quarta-feira");
        break;
        case 5:
        printf_s("O dia da semana é quinta-feira");
        break;
        case 6:
        printf_s("O dia da semana é sábado");
        break;
        default:
        printf_s("Não há nenhum dia com esse número");
        break;
}
getch();

return 0;
}