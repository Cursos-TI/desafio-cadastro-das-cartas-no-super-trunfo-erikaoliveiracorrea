#include <stdio.h>

int main() {

    //CARTA 1
                                     //EXEMPLOS
    char estado1[50];                 // Ceará 
    char codigo1[4];                  // A01
    char nome_cidade1[50];            // Fortaleza
    float populacao1;                 // 2.43
    float area1;                      // 146.348
    float pib1;                       // 194.9
    int pontos_turistico1;            // 15


    printf("===SUPER TRUNFO ESTADOS===\n");
    // Cadastro da carta 1 (entrada de dados)
    printf("\n=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado: ");  
    scanf(" %[^\n]", estado1);        //lê até encontrar o ENTER  

    printf("Digite o código da carta: ");
    scanf("%3s", codigo1);   // limita a 3 caracteres

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a população: ");
    scanf("%f", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turistico1);
 
    // // Exibição dos dados
    printf("\n--- Carta 1 ---\n");
    printf("Nome: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %f milhões de habitantes\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turistico1);

    //CARTA 2
                                       //EXEMPLOS
    char estado2[50];                 // Rio de Janeiro
    char codigo2[4];                  // A02
    char nome_cidade2[50];            // Rio de Janeiro
    float populacao2;                 // 6.7
    float area2;                      // 1.221
    float pib2;                       // 11.163
    int pontos_turistico2;            // 50

     // Cadastro da carta 2 (entrada de dados)
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado: ");  
    scanf(" %[^\n]", estado2);        //lê até encontrar o ENTER  

    printf("Digite o código da carta: ");
    scanf("%3s", codigo2);   // limita a 3 caracteres

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a população: ");
    scanf("%f", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turistico2);
 
    // // Exibição dos dados
    printf("\n--- Carta 2 ---\n");
    printf("Nome: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %f milhões de habitantes\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turistico2);


    return 0;
}

//COMENTÁRIOS SUGERIDO PELO PROFESSOR
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

 
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
