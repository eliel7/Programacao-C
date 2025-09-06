
#include <stdio.h>
#include <string.h> // Necessário para a função strlen

int main() {
    char nome[50]; // Define um buffer para armazenar o nome

    printf("Digite um nome completo (com espaços): ");
    fgets(nome, sizeof(nome), stdin); // Lê a linha completa

    // Remove o '\n' que fgets pode incluir no final da string
    nome[strcspn(nome, "\n")] = '\0';

    printf("Nome completo lido: %s\n", nome); // Exibe o nome completo

    return 0;
}