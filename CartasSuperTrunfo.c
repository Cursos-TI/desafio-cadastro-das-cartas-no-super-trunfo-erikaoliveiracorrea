#include <stdio.h>

int main() {
                                     //EXEMPLOS
    char estado[50];                 // Ceará 
    char codigo[4];                  // A01
    char nome_cidade[50];            // Fortaleza
    int populacao;                   // 20.000.000
    float area;                      // 10.000.000
    float pib;                       // 30.000.000
    int pontos_turistico;            // 50

    printf("Digite o estado: ");  //saída(output)
    scanf("%s", estado);          //entrada(input)

    printf("Digite o código da carta: ");
    scanf("%3s", codigo);   // limita a 3 caracteres

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turistico);
 
    // // Exibição dos dados
    printf("\n--- Carta 1 ---\n");
    printf("Nome: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %.2d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turistico);

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
