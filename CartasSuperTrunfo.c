#include <stdio.h>

int main() {

    //CARTA 1
                                     
    char estado1[50];                 
    char codigo1[4];                  
    char nome_cidade1[50];           
    unsigned long int populacao1;    //suporta grande valores              
    float area1;                     
    float pib1;                       
    int pontos_turistico1;           
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;


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
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turistico1);

   densidade_populacional1 = populacao1 / area1;
   pib_per_capita1 =(pib1 * 1000000000) / populacao1; 
   /*
    O PIB é digitado em bilhões, o programa multiplica por 1000000000 para transformar em reais.
    Depois divide pelos habitantes.
    Resultado sai em reais por pessoa.
   */

   //casting para float
   super_poder1= (float) populacao1 + area1 + pib1 + pontos_turistico1 + pib_per_capita1 + (1.0 / densidade_populacional1);
   
    // // Exibição dos dados
    printf("\n--- Carta 1 ---\n");
    printf("Nome: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d milhões de habitantes\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    //CARTA 2
                                
    char estado2[50];              
    char codigo2[4];                 
    char nome_cidade2[50];          
    unsigned long int populacao2;             
    float area2;                     
    float pib2;                      
    int pontos_turistico2; 
    float densidade_populacional2;
    float pib_per_capita2; 
    float super_poder2;        

    // Cadastro da carta 2 (entrada de dados)
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado: ");  
    scanf(" %[^\n]", estado2);        //lê até encontrar o ENTER  

    printf("Digite o código da carta: ");
    scanf("%3s", codigo2);   // limita a 3 caracteres

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turistico2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 =(pib2 * 1000000000) / populacao2; 

     super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turistico2 + pib_per_capita2 + (1.0 / densidade_populacional2);

 
    // // Exibição dos dados
    printf("\n--- Carta 2 ---\n");
    printf("Nome: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d milhões de habitantes\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

     // === Comparações ===
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (1) ou Carta 2 venceu (0): %d\n", (populacao1 > populacao2));
    printf("Área: Carta 1 venceu (1) ou Carta 2 venceu (0): %d\n", (area1 > area2));
    printf("PIB: Carta 1 venceu (1) ou Carta 2 venceu (0): %d\n", (pib1 > pib2));
    printf("Pontos Turísticos: Carta 1 venceu (1) ou Carta 2 venceu (0): %d\n", (pontos_turistico1 > pontos_turistico2));
    printf("Densidade Populacional: Carta 1 venceu (1) ou Carta 2 venceu (0): %d\n", (densidade_populacional1 < densidade_populacional2));
    printf("PIB per Capita: Carta 1 venceu (1) ou Carta 2 venceu (0): %d\n", (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta 1 venceu (1) ou Carta 2 venceu (0): %d\n", (super_poder1 > super_poder2));


    return 0;
}

