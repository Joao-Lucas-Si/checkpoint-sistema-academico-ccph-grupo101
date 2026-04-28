#include <stdio.h>

void mostrarDelimitadores()
{
    for (int i = 0; i < 5; i++)
    {
        printf("=====");
    }
    printf("\n");
}

float calcularMedia(float total, int nota)
{
    float calculo = total / nota;
    return calculo;
}
float inserir()
{
    float nota;
    printf("insira nota ");
    scanf("%f", &nota);

    return nota;
}

char *verificarSituacao(float total, int nota)
{

    float media = calcularMedia(total, nota);

    if (media >= 6)
    {
        return "aprovado";
    }
    else
    {
        return "reprovado";
    }
}

void derivada()
{
    float A, B, C;
    printf("Insira A: ");
    scanf("%f", &A);
   
    printf("Insira B: ");
    scanf("%f", &B);
    printf("Insira C: ");
    scanf("%f", &C);
    printf("f(x) = %.2fx**2 + %.2fx + %.2f\n", A, B, C);
}

int main()
{
    mostrarDelimitadores();
    printf("   SISTEMA EQUIPE 101   \n");
    mostrarDelimitadores();

    float total = 0;
    int notas = 0;

    int opcao = 0;

    while (opcao != 6)
    {
        float media = calcularMedia(total, notas);
        char *aprovacao = verificarSituacao(total, notas);
        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");

        printf("ESCOLHA UMA OPCAO: ");
        scanf("%d", &opcao);
        printf("\n");
        switch (opcao)
        {
        case 1:
            total += inserir();
            notas += 1;
            break;

        case 2:
            if (notas > 0)
            {

                printf("Sua media e: %.2f\n", media);
            }
            else
            {
                printf("insira a nota primeiro\n");
            }
            break;

        case 3:
            if (notas > 0)
            {

                printf("sua situacao e:%s\n", aprovacao);
            }
            else
            {
                printf("insira a nota primeiro\n");
            }
            break;

        case 4:
            if (notas > 0)
            {

                printf("O resultado e:\n");
                printf("Media: %.2f \n", media);
                printf("Aprovacao: %s \n", aprovacao);
                printf("Notas inseridas: %d \n", notas);
            }
            else
            {
                printf("insira a nota primeiro\n");
            }
            break;

        case 5:
            derivada();
            break;
        case 6:
            break;
        default:
            printf("insira uma opcao valida\n");
            break;
        }
    }

    return 0;
}
