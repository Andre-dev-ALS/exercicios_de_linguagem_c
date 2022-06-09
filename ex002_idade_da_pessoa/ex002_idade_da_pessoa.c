#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    system("chcp 65001");
    system("cls");
    
 int idade = 0, brincando =0;

 printf_s("Digite a sua idade\n");
 
scanf_s("%i", & idade);

printf_s("Sua idade é de  %i anos \n", + idade);

brincando = idade * 2;

printf_s("Eu pensava que vocÊ tinha %i anos ", + brincando);
getch();
    return 0;
}
