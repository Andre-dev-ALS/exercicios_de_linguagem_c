#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
system("chcp 65001");
system("cls");

int tamanho_linha = 0, tamanho_coluna = 0, linha = 0, coluna = 0;

printf_s("Quantas linhas terá a matriz ? \n");
scanf_s("%i", & tamanho_linha);

printf_s("Quantas colunas terá a matriz? \n");
scanf_s("%i", & tamanho_coluna);

int matriz[tamanho_linha][tamanho_coluna];

for(linha = 0; linha <  tamanho_linha; linha++){
    for(coluna = 0; coluna < tamanho_coluna; coluna++){

        printf_s("Digite um valor na linha %i coluna %i \n", + linha+1, coluna+1);
        scanf_s("%i", & matriz[linha][coluna]);

    }
}



for(linha = 0; linha <  tamanho_linha; linha++){
for(coluna= 0; coluna<  tamanho_coluna; coluna++){
printf_s("Na linha %i coluna %i tem o valor %i \n", + linha+1, coluna+1, matriz[linha][coluna]);
}
}

getch();
    return 0;
}

