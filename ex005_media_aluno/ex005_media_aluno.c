#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
system("chcp 65001");
system("cls");

float nota1 = 0, nota2 = 0, media =0;

printf_s("Digite a primeira nota");
scanf_s("%f", & nota1);

printf_s("Digite a segunda nota");
scanf_s("%f", & nota2);

media = (nota1 + nota2) /2;

printf_s("Tirando %.2f e %.2f sua média é de %.2f \n", + nota1, nota2, media);

if(media >= 7){
    printf_s("Parabéns, vocÊ foi aprovado");
}
else{
    if(media >= 5 && media < 7){
        printf_s("Você ficou em recuperação");
    }
    else{
    printf_s("VocÊ foi reprovado, estude mais e tente novamente");
    }
}
getch();
    return 0;
}
