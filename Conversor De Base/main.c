#include <stdio.h>
#include <stdlib.h>

// Autor: João

int main()
{
    int opcao;
    int valor;


    printf("\t\t\t\t\tConversor Bases Numerericas\n\n");
    printf("1: decimal para hexadecimal\n");
    printf("2: hexadecimal para decimal\n");
    printf("\n\nInforme a opcao: ");
    scanf("%d", &opcao);


    if(opcao == 1){
        printf("\nInformar o valor em decimal: ");
        scanf("%d", &valor);
        getchar();
        printf("%d em hexadecimal e: %x\n", valor, valor);
    }
     else if(opcao == 2)
     {
        printf("\nInformar o valor em hexadecimal: ");
        scanf("%x", valor);
        getchar();
        printf("%x em decimal e: %d\n", valor, valor);
     }


    else printf("\nOpcao invalida!, tente novamente\n\n");


    return 0;
}
