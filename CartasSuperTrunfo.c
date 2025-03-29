#include <stdio.h>

int main() {
    // Dados das cartas
    long long pop1 = 211000000, pop2 = 331000000;
    double area1 = 8515767.0, area2 = 9833517.0, pib1 = 2065.0, pib2 = 21138.0;
    int pontos1 = 0, pontos2 = 0;

    // Cálculando de Densidade Populacional e PIB per Capita
    double dens1 = pop1 / area1, dens2 = pop2 / area2;
    double pibPerCapita1 = pib1 * 1e9 / pop1, pibPerCapita2 = pib2 * 1e9 / pop2;
    double superPoder1 = dens1 * pibPerCapita1, superPoder2 = dens2 * pibPerCapita2;

    // Comparações
    printf("População: ");
    if (pop1 > pop2) { printf("Carta 1 venceu (1)\n"); pontos1++; } else { printf("Carta 2 venceu (1)\n"); pontos2++; }

    printf("Área: ");
    if (area1 > area2) { printf("Carta 1 venceu (1)\n"); pontos1++; } else { printf("Carta 2 venceu (1)\n"); pontos2++; }

    printf("PIB: ");
    if (pib1 > pib2) { printf("Carta 1 venceu (1)\n"); pontos1++; } else { printf("Carta 2 venceu (1)\n"); pontos2++; }

    printf("Pontos Turísticos: ");
    if (2000 > 3000) { printf("Carta 1 venceu (1)\n"); pontos1++; } else { printf("Carta 2 venceu (1)\n"); pontos2++; }

    printf("Densidade Populacional: ");
    if (dens1 > dens2) { printf("Carta 1 venceu (1)\n"); pontos1++; } else { printf("Carta 2 venceu (1)\n"); pontos2++; }

    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) { printf("Carta 1 venceu (1)\n"); pontos1++; } else { printf("Carta 2 venceu (1)\n"); pontos2++; }

    printf("Super Poder: ");
    if (superPoder1 > superPoder2) { printf("Carta 1 venceu (1)\n"); pontos1++; } else { printf("Carta 2 venceu (1)\n"); pontos2++; }

    // Resultado final
    printf("\nResultado final: ");
    if (pontos1 > pontos2) printf("Carta 1 venceu com %d pontos!\n", pontos1);
    else if (pontos1 < pontos2) printf("Carta 2 venceu com %d pontos!\n", pontos2);
    else printf("Empate!\n");

    return 0;
}
