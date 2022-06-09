#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int contador = 30;

    for(contador = 30; contador >= 0; contador -= 3){

        printf_s("contando %i \n", + contador);
    }
    getch();
    return 0;
}
