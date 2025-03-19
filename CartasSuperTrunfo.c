#include <stdio.h>
#include <string.h>

// Definindo uma estrutura para a carta do Super Trunfo
typedef struct {
    char nome[100];      // Nome da cidade 
    long long populacao; // População da cidade 
    double area;         // Área em km²
    double pib;          // PIB da cidade ou país
    double densidade;    // Densidade populacional (calculada automaticamente)
    double pib_per_capita; // PIB per capita (calculado automaticamente)
} Carta;

// Função para calcular densidade populacional e PIB per capita
void calcularIndicadores(Carta *carta) {
    carta->densidade = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
}

// Função para exibir os detalhes da carta
void exibirCarta(Carta carta) {
    printf("Carta: %s\n", carta.nome);
    printf("População: %lld\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f\n", carta.pib);
    printf("Densidade Populacional: %.2f pessoas por km²\n", carta.densidade);
    printf("PIB per Capita: R$ %.2f\n\n", carta.pib_per_capita);
}

int main() {
    // Criando algumas cartas de exemplo
    Carta carta1 = {"Cidade A", 1000000, 500.0, 5000000000.0};
    Carta carta2 = {"Cidade B", 2000000, 800.0, 10000000000.0};
    
    
    // Calculando a densidade e o PIB per capita para cada carta
    calcularIndicadores(&carta1);
    calcularIndicadores(&carta2);
    
    
    // Exibindo as cartas
    printf("Detalhes das Cartas do Super Trunfo:\n\n");
    exibirCarta(carta1);
    exibirCarta(carta2);
    
    
    return 0;
}
