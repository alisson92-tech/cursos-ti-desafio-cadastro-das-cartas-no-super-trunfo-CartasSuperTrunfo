#include <stdio.h>
#include <string.h>

int main () {
//Declarar as variáveis da cidade 01
    char estado01;  //letra do estado
    char codigo01[5];  //código da carta
    char cidade01[50];  //nome da cidade
    int populacao01;  //população da cidade
    float area01;  //área em Km²
    float PIB01;  //PIB da cidade
    int pontos_turisticos01;  //número de pontos turisticos

//declarar variaveis da cidade 02

    char estado02; 
    char codigo02[5]; 
    char cidade02[50];  
    int populacao02;  
    float area02;  
    float PIB02; 
    int pontos_turisticos02;


//solicitação dos dados carta 01

    printf("Digite a letra do estado:");
    scanf(" %c", &estado01);  //Espaço antes do %c para limpar o enter do buff
    printf("Digite o código da carta:");
    scanf("%s", codigo01);
    printf("Digite o nome da cidade:");
    getchar();  //limpa o enter do buff
    fgets(cidade01, 50, stdin);  //fgets lê nome composto -> stdin = origem do teclado
    // strcspn procura o caractere '\n' dentro da string e substitui por '\0', removendo o ENTER do final da string
    cidade01[strcspn(cidade01, "\n")] = '\0';  
    printf("Digite o número de habitantes:");
    scanf("%d", &populacao01);
    printf("Digite a área em Km²:");
    scanf("%f", &area01);
    printf("Digite o PIB:");
    scanf("%f", &PIB01);
    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontos_turisticos01);

    printf("\n");

//solicitação dos dados arta 02

    printf("Digite a letra do estado:");
    scanf(" %c", &estado02);  
    printf("Digite o código da carta:");
    scanf("%s", codigo02);
    printf("Digite o nome da cidade:");
    getchar(); 
    fgets(cidade02, 50, stdin);  
    cidade02[strcspn(cidade02, "\n")] = '\0';  
    printf("Digite o número de habitantes:");
    scanf("%d", &populacao02);
    printf("Digite a área em Km²:");
    scanf("%f", &area02);
    printf("Digite o PIB:");
    scanf("%f", &PIB02);
    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontos_turisticos02);

    printf("\n");


  //Visualisação dos dados

    printf("Informações da carta 01 \n");
    printf("Estado: %c \n", estado01);
    printf("Código: %s \n", codigo01);
    printf("Nome da cidade: %s \n", cidade01);
    printf("População: %d \n", populacao01);
    printf("Área: %.2f Km² \n", area01);  // %.2f define apenas duas casas após a virgula
    printf("PIB: %.2f bilhões de reais \n", PIB01);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos01);

    printf("\n");

    printf("Informações da carta 02 \n");
    printf("Estado: %c \n", estado02);
    printf("Código: %s \n", codigo02);
    printf("Nome da cidade: %s \n", cidade02);
    printf("População: %d \n", populacao02);
    printf("Área: %.2f Km² \n", area02);
    printf("PIB: %.2f bilhões de reais \n", PIB02);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos02);


    return 0;

}