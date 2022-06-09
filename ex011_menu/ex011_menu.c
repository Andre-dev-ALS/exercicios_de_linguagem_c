
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "adicionar_pedido.c"

#include "atendente.c"
#include "cliente.c"
#include "excluir_pedido.c"
#include "erro.c"
int main()
{
    system("chcp 65001");
    system("cls");





int opcao = 0;

do
{
    


    printf_s("Por favor escolha uma das opções do menu \n");
    printf_s("Digite 1 para atendente \n digite 2 para cliente\n");
printf_s("Digite 3 para adicionar um pedido \n Digite 4 para excluir um pedido");
scanf_s("%i", & opcao);




    switch (opcao)
    {
    case 1: 
        atendente();
        break;
    case 2:
    cliente();
    break;
    case 3:
    adicionar_pedido();
    break;
    case 4:
    excluir_pedido();
    break;
    default:
erro();
    


        break;
    }
} while (opcao > 4 );
getch();

return 0;
}