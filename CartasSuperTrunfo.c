#include <stdio.h> // Inclui a biblioteca de entrada e saída, necessária para usar printf e scanf.

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: Nível novato: Criar as cartas representando as cidades utilizando scanf para entrada de dados
// e printf para exibir as informações.

int main() {
    // Declaração de variáveis para armazenar os dados da primeira carta.
    // Variáveis com o sufixo '1' se referem à primeira carta.
    int populacao1, pontos_turisticos1;
    float area1, PIB1;
    char estado1, codigo_carta1[5], cidade1[50]; // '5' para o código (ex: A01 + \0) e '50' para o nome da cidade.

    // Declaração de variáveis para a segunda carta.
    // Variáveis com o sufixo '2' se referem à segunda carta.
    int populacao2, pontos_turisticos2;
    float area2, PIB2;
    char estado2, codigo_carta2[5], cidade2[50];

    // --- Seção de Cadastro da Carta 1 ---
    printf("\n--- Cadastro da Carta 1 ---\n");

    // Solicita e lê o estado da carta. O espaço antes de '%c' é importante para
    // ignorar qualquer caractere de espaço em branco ou quebra de linha ('\n')
    // que possa ter sobrado no buffer de entrada da execução anterior.
    printf("Digite o nome do Estado (uma letra de 'A' a 'H'): \n");
    scanf(" %c", &estado1);
        
    // Solicita e lê o código da carta. O '%4s' garante que o programa leia no
    // máximo 4 caracteres, prevenindo uma tentativa de escrever mais caracteres
    // do que o array pode armazenar.
    printf("Digite o código da carta (letra do Estado + '01' a '04'): \n");
    scanf(" %4s", codigo_carta1);

    // Solicita e lê o nome da cidade. O '%49s' garante que a string não
    // ultrapasse o tamanho do array 'cidade1' (50 - 1 para o '\0').
    // O usuário deve substituir espaços por underlines (ex: "Rio_de_Janeiro"),
    // pois 'scanf' com '%s' lê a string apenas até o primeiro espaço.
    printf("Digite o nome da cidade: \n");
    scanf(" %49s", cidade1);

    // Leituras dos dados numéricos. 'scanf' não exige o espaço antes do especificador
    // de formato para números inteiros ou de ponto flutuante, pois eles já ignoram
    // espaços em branco automaticamente.
    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    // --- Seção de Exibição da Carta 1 ---
    // Imprime os dados coletados de forma organizada.
    printf("\n--- Carta 1: ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1); // '%.2f' formata a saída para 2 casas decimais.
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    // --- Seção de Cadastro da Carta 2 ---
    // O mesmo processo de leitura e armazenamento é repetido para a segunda carta.
    printf("\n--- Cadastro da Carta 2 ---\n");
    
    printf("Digite o nome do Estado (uma letra de 'A' a 'H'): \n");
    scanf(" %c", &estado2);
        
    printf("Digite o código da carta (letra do Estado + '01' a '04'): \n");
    scanf(" %4s", codigo_carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %49s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    // --- Seção de Exibição da Carta 2 ---
    // Imprime os dados da segunda carta.
    printf("\n--- Carta 2: ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}