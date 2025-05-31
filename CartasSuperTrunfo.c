#include <stdio.h>

    //PontosT = pontos turisticos
    //eu dividi os floats das áreas e dos pibs, pq tava dando uma confusão entre eles e eu não tava entendendo bem ai pensei que assim resolveria

        int main() {
            char estado1[50], codigo1[50], cidade1[50], estado2[50], codigo2[50], cidade2[50];
            int populacao1, pontosT1, populacao2, pontosT2;
            float area1, area2;
            float pib1, pib2;

            printf("Insira os dados da sua carta!\n");
            printf("carta 1!\n");
           
            printf("qual é o estado da sua carta?: \n");
            scanf("%s", &estado1);

            printf("qual é o codigo?: \n");
            scanf("%s", &codigo1);

            printf("Digite o nome da cidade:\n");
            scanf("%s", &cidade1);

            printf("qual a população da sua cidade?:\n");
            scanf("%d", &populacao1);

            printf("digite a área da sua cidade:\n");
            scanf("%f", &area1);

            printf("quanto é o PIB?:\n");
            scanf("%f", &pib1);

            printf("e pra finalizar, digite aqui a quantidade de pontos turisticos:\n");
            scanf("%d", &pontosT1);

//tentei usar como exemplo em um teste a cidade de São Paulo, mas eu acho que por ser um nome composto com um espaço no meio não funcionou
//respostas de string com espaço no meio quebram o código :/

            printf("Carta 1:\n");
            printf("Estado: %s\n", estado1);
            printf("Código: %s\n", codigo1);
            printf("Nome da cidade: %s\nPopulação %d\n", cidade1, populacao1);
            printf("Área: %f\nPIB: %f\n", area1, pib1);
            printf("Pontos turisticos: %d\n", pontosT1);

            


            

}
