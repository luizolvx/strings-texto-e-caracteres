#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    float salario;
    
    printf("Digite o nome do trabalhador: ");
    fgets(nome, sizeof(nome), stdin);
    
    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);
    
    printf("Digite o salário do trabalhador: ");
    scanf("%f", &salario);
    
    printf("\nDados do Trabalhador\n");
    printf("Nome: %s", nome);
    printf("Idade: %d anos\n", idade);
    printf("Salário: R$ %.2f\n", salario);
    
    return 0;
}
