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
    
    float total = 0 ;
    int notas = 0;


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
        case 1 :
        total += inserir ();
        notas += 1 ; 
         
        break;
        case 2: 
        float media = calcularMedia(total, notas);
        printf("Sua média é: %f", media);
        break;
        
        default:
            break;
        }

    }
    

    
    return 0;
}
float calcularMedia(float total,int nota){
    float calculo=total/nota;
    return calculo;

}
float inserir ( ){
    float nota ;
    printf("insira nota ");
    scanf( "%f", &nota);
    return nota; 




} 