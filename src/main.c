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

    int opcao = 0;

    while (opcao != 6)
    {
        printf("1 - Inserir notas");
        printf("2 - Calcular media");
        printf("3 - Verificar situacao");
        printf("4 - Exibir resultado");
        printf("5 - Calcular derivada");
        printf("6 - Sair");

        printf("ESCOLHA UMA OPÇÃO");
        scanf("%d", &opcao);

        switch (opcao) 
        {
        
        
        default:
            break;
        }

    }
    

    
    return 0;
}