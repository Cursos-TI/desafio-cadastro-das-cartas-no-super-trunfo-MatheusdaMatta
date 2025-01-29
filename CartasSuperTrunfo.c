#include <stdio.h>

int main() {
char UF[2]; //nome do Estado 
char CartCode [3]; //indica o código da carta composto por uma letra e um número
char Cidade [10]; // nome da cidade
int Populacao; // total da população
float Area; // total da area
float Pib; // indicador de desenvolvimento 
int Turismo; //número de pontos turisticos


    printf("Crie suas cartas de Super Trunfo! \n"); 
    printf("O primeiro passo é fazer algumas perguntas, vamos lá! \n");
    
        printf("Digite o Estado: \n");
        scanf("%s", &UF  );

        printf("Digite o Município: \n");
        scanf("%s", &Cidade);

        printf("Agora vamos criar o código da carta! Indique uma letra de A a H para o Estado e um número de 01 a 04 para o município \n");
        printf("Digite o código da carta: \n");
        scanf("%s", &CartCode  );

        printf("Agora digite o número de habitantes: \n");
        scanf("%d", &Populacao  );

        printf("E o tamanho dete município?: \n");
        scanf("%f", &Area  );        

        printf("A economia vai bem? Conta o PIB pra gente!: \n");
        scanf("%f", &Pib  );

        printf("Ninguém é de ferro, em quantos lugares podemos turistar?: \n");
        scanf("%d", &Turismo  );

            printf("Aqui está a sua carta! \n");

                printf("Código da Carta: %s \n", CartCode);
                printf("Estado: %s \n", UF);
                printf("Município: %s \n", Cidade);
                printf("Número de Habitantes: %d \n", Populacao);
                printf("Área: %f \n", Area);
                printf("PIB: %f \n", Pib);
                printf("Pontos turistícos: %d \n", Turismo);

    printf("Espero que tenha se divertido! Até breve!");

    return 0;

}