#include <stdio.h>
#include <string.h>

int main(){

    int populacao, populacao2, pontTuristico, pontTuristico2;
    char estado, estado2;
    char codigoCarta[3], codigoCarta2[3];
    char cidade[50], cidade2[50];
    float area, area2, PIB, PIB2;

    printf("Seja bem vindo ao SUPER TRUNFO\n");

    printf("Para realizar o cadastro das cartas é necessario preencher algumas informações, por favor preencha os dados a seguir\n");

    printf("Vamos realizar o cadastro da primeira carta!\n");

    //Primeiro vamos precisar que o usuario entre com os dados das cartas;

    printf("Digite a letra entre A a H que representa o estado:\n");
    scanf("%c", &estado);
    printf("\n");

    printf("Digite o codigo da carta, ou seja os numeros que aparecem após a letra do estado:\n");
    scanf("%s", &codigoCarta);
    printf("\n");

    printf("Digite o nome da cidade:\n");
    getchar(); // limpa o buffer, caso venha de um scanf
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0'; // remove o \n no final
    printf("\n");

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("\n");

    printf("Digite a area em Km² da cidade:\n");
    scanf("%f", &area);
    printf("\n");

    printf("Digite o PIB da cidade\n");
    scanf("%f", &PIB);
    printf("\n");

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontTuristico);
    printf("\n");

    printf("O cadastro da primeira carta foi concluido!\n");
    printf("Agora vamos cadastrar a segunda carta\n");
    
    getchar();
    printf("Digite a letra entre A a H que representa o estado:\n");
    scanf("%c", &estado2);
    printf("\n");
    
    printf("Digite o codigo da carta, ou seja, os numeros que aparecem após a letra do estado:\n");
    scanf("%s", &codigoCarta2);
    printf("\n");

    printf("Digite o nome da cidade:\n");
    getchar(); // limpa o buffer, caso venha de um scanf
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; // remove o \n no final
    printf("\n");

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2);
    printf("\n");

    printf("Digite a area em Km² da cidade:\n");
    scanf("%f", &area2);
    printf("\n");

    printf("Digite o PIB da cidade\n");
    scanf("%f", &PIB2);
    printf("\n");

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontTuristico2);
    printf("\n");

    // Agora vamos mostrar os dados preenchidos pelo usuario, afim de confirmar os dados!;

    printf("Aqui estão os dados das cartas cadastradas:\n\n");
    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %c%s\n", estado, codigoCarta); // para mostrar o codigo da carta corretamente foi mostrada as 2 variaveis juntas
    printf("Nome da cidade: %s\n", cidade);
    printf("população: %d\n", populacao);
    printf("Área da cidade: %.2f\n", area);
    printf("PIB da cidade: %.2f\n", PIB);
    printf("Numero de pontos turisticos: %d\n\n\n", pontTuristico);
    
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %c%s\n", estado2, codigoCarta2); // para mostrar o codigo da carta corretamente foi mostrada as 2 variaveis juntas
    printf("Nome da cidade: %s\n", cidade2);
    printf("população: %d\n", populacao2);
    printf("Área da cidade: %.2f\n", area2);
    printf("PIB da cidade: %.2f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", pontTuristico2);

    return 0;
}
