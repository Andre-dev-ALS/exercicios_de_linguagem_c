#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <tchar.h>
void clear_keyboard_buffer(void)
 {
 int c = 0;
 while ((c = getchar()) != '\n' && c != EOF)
 
{} return; }

void cliente()
{
 TCHAR nome[40];
 char e_mail[50]; 
char telefone[12];
 printf_s("VocÊ escolheu cliente\n ");


printf_s("Digite o nome do cliente para fazer o cadastro\n não use acentuação no nome \n");
scanf_s("%s", nome);
clear_keyboard_buffer();
printf_s("Digite o e_mail do cliente \n");
scanf_s("%s", & e_mail);
clear_keyboard_buffer();
printf_s("Digite o número de telefone do cliente\n");
    scanf_s("%s", & telefone);

printf_s("Dados do cliente cadastrado\n");


printf_s("O nome do cliente é  "); puts(nome);
printf_s("O e-mail do cliente é ");; puts(e_mail);

printf_s("o telefone do cliente é"); puts(telefone);

    

}
