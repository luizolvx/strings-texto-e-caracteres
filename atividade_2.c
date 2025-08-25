#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50];

    printf("Digite o primeiro nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';  

    printf("Digite o sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);

    printf("Nome completo: %s %s\n", nome, sobrenome);

    return 0;
}
