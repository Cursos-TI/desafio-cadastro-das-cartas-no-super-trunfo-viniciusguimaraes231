#include <stdio.h>

// Definindo uma estrutura para armazenar os dados da carta
typedef struct {
    char estado;                // Letra de 'A' a 'H'
    char codigo[4];             // Ex: A01, B03 (3 caracteres + '\0')
    char nomeCidade[100];       // Nome da cidade
    int populacao;              // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // PIB em bilhões
    int pontosTuristicos;       // Número de pontos turísticos
} Carta;

// Função para ler os dados de uma carta
void lerCarta(Carta *carta, int numero) {
    printf("\n--- Cadastro da Carta %d ---\n", numero);
    
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &carta->estado);  // Espaço antes do %c para ignorar \n anterior

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);  // Lê até nova linha

    printf("Digite a população da cidade: ");
    scanf("%d", &carta->populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta->area);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

// Função para imprimir os dados de uma carta
void imprimirCarta(Carta carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    Carta carta1, carta2;

    printf("Bem-vindo ao cadastro de Cartas Super Trunfo!\n");

    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    printf("\n===== Cartas Cadastradas =====\n");
    imprimirCarta(carta1, 1);
    imprimirCarta(carta2, 2);

    return 0;
}