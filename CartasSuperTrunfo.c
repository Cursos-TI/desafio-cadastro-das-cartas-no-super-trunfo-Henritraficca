#include <stdio.h>

    //PontosT = pontos turisticos
    //eu dividi os floats das áreas e dos pibs, pq tava dando uma confusão entre eles e eu não tava entendendo bem ai pensei que assim resolveria

        int main() {
            char estado1[50], codigo1[50], cidade1[50];
            char estado2[50], codigo2[50], cidade2[50];
            int populacao1, pontosT1, populacao2, pontosT2;
            float area1, area2;
            float pib1, pib2;

//aqui começa a leitura de dados da primeira carta

            printf("Insira os dados da sua carta!\n");
            printf("carta 1!\n");
           
            printf("Qual é o estado da sua carta?: ");
            scanf("%s", estado1);

            printf("Qual é o codigo?: ");
            scanf("%s", codigo1);

            printf("Digite o nome da cidade: ");
            scanf("%s", cidade1);

            printf("Qual a população da sua cidade?: ");
            scanf("%d", &populacao1);

            printf("Digite a área da sua cidade: ");
            scanf("%f", &area1);

            printf("Quanto é o PIB?: ");
            scanf("%f", &pib1);

            printf("E pra finalizar, digite aqui a quantidade de pontos turisticos: ");
            scanf("%d", &pontosT1);

//tentei usar como exemplo em um teste a cidade de São Paulo, mas eu acho que por ser um nome composto com um espaço no meio não funcionou
//aqui é a impressão dos dados inseridos da primeira carta
//eu poderia ter feito tudo junto em um ou dois "printf" mas tava meio estranho então resolvi separa-los, assim ficou mais facil pra entender

            printf("Carta 1:\n");
            printf("Estado: %s\n", estado1);
            printf("Código: %s\n", codigo1);
            printf("Nome da cidade: %s\nPopulação %d\n", cidade1, populacao1);
            printf("Área: %f\nPIB: %f\n", area1, pib1);
            printf("Pontos turisticos: %d\n", pontosT1);

//finalizado o cadastro da primeira carta, e iniciando a leitura dos dados da segunda, fiz a mesma coisa da primeira

            printf("Agora vamos cadastrar a sua segunda carta!\n");
            printf("Insira os dados da sua segunda carta\n");
            printf("Carta 2:\n");

            printf("Qual é o estado da sua carta?: ");
            scanf("%s", estado2);

            printf("Qual é o codigo? ");
            scanf("%s", codigo2);

            printf("Digite o nome da cidade: ");
            scanf("%s", cidade2);

            printf("Qual a população da cidade?: ");
            scanf("%d", &populacao2);

            printf("Digite a área da sua cidade: ");
            scanf("%f", &area2);

            printf("Quanto é o PIB?: ");
            scanf("%f", &pib2);

            printf("E pra finalizar, digite aqui a quantidade de pontos turisticos: ");
            scanf("%d", &pontosT2);

            printf("Carta 2:\n");
            printf("Estado: %s\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("Nome da cidade: %s\nPopulação: %d\n", cidade2, populacao2);
            printf("Área: %f\nPIB: %f\n", area2, pib2);
            printf("Pontos turisticos: %d", pontosT2);              

//eu terminei de escrever todo o código e até ta rodando tudo como deveria, mas ainda estão acontecendo alguns bugs e eu sinceramente não consegui entender o motivo
//vou tentar mudar alguma coisa nas váriaveis e talvez fique meio estranho mas o importante é rodar tudo certo
//tive alguns problemas com as variaveis de char, porque nao entendo bem como funciona a questão dos arrays, mas depois de pesquisar um pouco aprendi que eu só precisava remover o '&' dos 'scanf'
//o problema com o char era esse aqui: format s expects argument of type char * but argument 2 has type char * 50

        return 0;
        
}


