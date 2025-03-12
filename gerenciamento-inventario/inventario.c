// O sistema permite:
// Cadastrar produtos com diferentes características
// Comparar a quantidade em estoque e o valor total em diferentes produtos

#include <stdio.h>

int main()
{
    // Declarar variáveis Produto, u i estoque, double valor unitário, double valor total e u i quantidade mínima.
    char productA[30] = "Produto A";
    char productB[30] = "Produto B";

    unsigned int storageA = 1000;
    unsigned int storageB = 2000;

    float priceA = 10.50;
    float priceB = 20.40;

    unsigned int minimumStorageA = 500;
    unsigned int minimumStorageB = 2500;

    double totalValueA;
    double totalValueB;

    int resultA;
    int resultB;

    // Exibir as informações dos produtos.
    printf("\n\n******* Gerenciador de estoque ********\n\n");

    printf("Produto %s tem estoque de %u unidades disponíveis e o valor unitário é de R$ %.2f reais\n", productA, storageA, priceA);
    printf("Produto %s tem estoque de %u unidades disponíveis e o valor unitário é de R$ %.2f reais\n", productB, storageB, priceB);
    // Comparações com o valor mínimo de estoque.

    resultA = storageA > minimumStorageA;
    resultB = storageB > minimumStorageB;

    printf("O produto %s tem estoque minimo %d.\n", productA, resultA);
    printf("O produto %s tem estoque minimo %d.\n ", productB, resultB);
    // Comparações entre os valores totais dos produtos.

    printf("O valor total de A (R$ %.2f reais) é maior que o valor total de B (R$ %.2f reais): %d\n", storageA * priceA, storageB * priceB, (storageA * priceA) > (storageB * priceB));

    return 0;
}
