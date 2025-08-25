#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200], consoante, novaStr[200];
    int i, vogais = 0, consoantes = 0;
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    
    printf("Digite uma consoante: ");
    scanf(" %c", &consoante);
    consoante = tolower(consoante);
    
    for (i = 0; str[i] != '\0'; i++) {
        if (strchr("aeiouAEIOU", str[i])) {
            vogais++;
            novaStr[i] = consoante;
        } else {
            novaStr[i] = str[i];
            if (isalpha(str[i]) && !strchr("aeiouAEIOU", str[i])) {
                consoantes++;
            }
        }
    }
    novaStr[i] = '\0';
    
    printf("\nNúmero de vogais: %d\n", vogais);
    printf("Número de consoantes: %d\n", consoantes);
    printf("Nova string: %s\n", novaStr);
    
    return 0;
}
