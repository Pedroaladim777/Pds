#include <stdio.h>
#include <stdlib.h>

typedef struct EspecificacoesTecnicas {
        char tipo[20];
        float tensaoOperacao;
        float correnteMaxima;
        int consumoEnergiaWatts;
} EspecificacoesTecnicas;

typedef struct Equipamento{
    int codigo[5];
    char nome[30];
    char fabricante[30];
    int anoFabricacao;
    int emUso;
    float valorEstimado;
    char numeroSerie[15];
    struct EspecificacoesTecnicas;
} Equipamento;

void adicionarEquipamento(struct Equipamento *a) {
    printf("Codigo: ");
    scanf("%d", &a->codigo);
    printf("Nome: ");
    scanf("%s", &a->nome);
    printf("Fabricante: ");
    scanf("%s", &a->fabricante);
    printf("Ano de fabricacao: ");
    scanf("%d", &a->anoFabricacao);
   printf("Em uso: ");
    scanf("%d", &a->emUso);
    printf("Valor estimado: ");
    scanf("%f", &a->valorEstimado);
    printf("Numero de serie: ");
    scanf("%s", &a->numeroSerie);
    printf("Tipo: ");
    scanf("%d", &a->tipo);
    printf("Em uso: ");
    scanf("%d", &a->emUso);
    printf("Valor estimado: ");
    scanf("%f", &a->valorEstimado);
    printf("Numero de serie: ");
    scanf("%s", &a->numeroSerie);
}

int main() {

    return 0;
}