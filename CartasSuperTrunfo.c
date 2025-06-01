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
           
            printf("qual é o estado da sua carta?: ");
            scanf("%s", &estado1);

            printf("qual é o codigo?: ");
            scanf("%s", &codigo1);

            printf("Digite o nome da cidade: ");
            scanf("%s", &cidade1);

            printf("qual a população da sua cidade?: ");
            scanf("%d", &populacao1);

            printf("digite a área da sua cidade: ");
            scanf("%f", &area1);

            printf("quanto é o PIB?: ");
            scanf("%f", &pib1);

            printf("e pra finalizar, digite aqui a quantidade de pontos turisticos: ");
            scanf("%d", &pontosT1);

//tentei usar como exemplo em um teste a cidade de São Paulo, mas eu acho que por ser um nome composto com um espaço no meio não funcionou
//respostas de string com espaço no meio quebram o código :/

            printf("Carta 1:\n");
            printf("Estado: %s\n", estado1);
            printf("Código: %s\n", codigo1);
            printf("Nome da cidade: %s\nPopulação %d\n", cidade1, populacao1);
            printf("Área: %f\nPIB: %f\n", area1, pib1);
            printf("Pontos turisticos: %d\n", pontosT1);

//finalizado o cadastro da primeira carta, agora o código da segunda

            printf("Agora vamos cadastrar a sua segunda carta!\n");
            printf("Carta 2:\n");

            printf("Qual é o estado da sua carta?: ");
            scanf("%s", &estado2);

            printf("Qual é o codigo? ");
            scanf("%s", &codigo2);

            printf("Digite o nome da cidade: ");
            scanf("%s", &cidade2);

            printf("Qual a população da cidade?: ");
            scanf("%d", &populacao2);

            printf("Digite a area da sua cidade: ");
            scanf("%f", &area2);

            printf("Quanto é o pib?: ");
            scanf("%f", &pib2);

            printf("E pra finalizar, digite aqui a quantidade de pontos turisticos: ");
            scanf("%d", &pontosT2);

            printf("carta 2:\n");
            printf("Estado: %s\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("Nome da cidade: %s\nPopulação: %d\n", cidade2, populacao2);
            printf("Área: %f\nPIB: %f\n", area2, pib2);
            printf("Pontos turisticos: %d", pontosT2);


          return 0;              

//eu terminei de escrever todo o código e até ta rodando tudo como deveria, mas ainda estão acontecendo alguns bugs e eu sinceramente não consegui entender o motivo
//vou tentar mudar alguma coisa nas váriaveis e talvez fique meio estranho mas o importante é rodar tudo certo

}

