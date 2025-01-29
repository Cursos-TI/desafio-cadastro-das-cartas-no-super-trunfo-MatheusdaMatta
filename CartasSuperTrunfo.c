#include <stdio.h>

int main() {
char Estado [20], CartCode [5], Cidade [10]; //nome do Estado, Município e código da carta 
int Populacao; // total da população
float Area; // total da area
float Pib; // indicador de desenvolvimento 
int Turismo; //número de pontos turisticos


    printf("Crie suas cartas de Super Trunfo! \n"); 
    printf("O primeiro passo é fazer algumas perguntas, vamos lá! \n");
    
        printf("Digite o Estado: \n");
        scanf("%s", Estado  );

        printf("Digite o Município: \n");
        scanf("%s", Cidade);

        printf("Agora vamos criar o código da carta! Indique uma letra de A a H para o Estado e um número de 01 a 04 para o município \n");
        printf("Digite o código da carta: \n");
        scanf("%s", CartCode  );

        printf("Agora digite o número de habitantes: \n");
        scanf("%d", &Populacao  );

        printf("E o tamanho deste município?: \n");
        scanf("%f", &Area  );        

        printf("A economia vai bem? Conta o PIB pra gente!: \n");
        scanf("%f", &Pib  );

        printf("Ninguém é de ferro, em quantos lugares podemos turistar?: \n");
        scanf("%d", &Turismo  );

            printf("Aqui está a sua carta! \n"); 
    printf("Código da Carta: %s\n", CartCode); 
    printf("Estado: %s\n", Estado); 
    printf("Município: %s\n", Cidade); 
    printf("Número de Habitantes: %d \n", Populacao); 
    printf("Área: %f km²\n", Area); 
    printf("PIB: %f \n", Pib);
    printf("Pontos turísticos: %d \n", Turismo);

    printf("Espero que tenha se divertido! Até breve!");

    return 0;

}