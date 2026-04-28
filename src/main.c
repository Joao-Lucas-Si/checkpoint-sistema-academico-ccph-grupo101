#include<stdio.h>


void mostrarDelimitadores() {
     for (int i =0; i < 5; i++) {
        printf("=====");
    }
    printf("\n");
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

char* verificarSituacao(float total,int nota) {

    float media = calcularMedia (total, nota);

    if (media >= 6){
     return"aprovado";
     
    }
    else {
        return"reprovado";
    }
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
        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");

        printf("ESCOLHA UMA OPCAO");
        scanf("%d", &opcao);
        printf("\n");
        switch (opcao) 
        {
        case 1 :
        total += inserir ();
        notas += 1 ; 
         break;

        case 2: 
        float media = calcularMedia(total, notas);
        printf("Sua media e: %f\n", media);
        break;
        
        case 3 :
        char* aprovacao = verificarSituacao(total, notas );
        printf("sua situacao e:%s\n", aprovacao); 

        
        default:
            break;
        }

    }
    

    
    return 0;
}
