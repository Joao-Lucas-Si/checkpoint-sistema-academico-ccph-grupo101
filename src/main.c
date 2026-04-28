#include<stdio.h>


void mostrarDelimitadores() {
     for (int i =0; i < 5; i++) {
        printf("=====");
    }
    printf("\n");
}

int main() {
    mostrarDelimitadores();
    printf("   SISTEMA EQUIPE 101   \n");
    mostrarDelimitadores();
    
    float nota1, nota2, nota3, nota4;

    int sair = 0;

    while (sair != 1)
    {
        printf("1 - Inserir notas");
        printf("2 - Calcular media");
        printf("3 - Verificar situacao");
        printf("4 - Exibir resultado");
        printf("5 - Calcular derivada");
        printf("6 - Sair");
    }
    

    
    return 0;
}