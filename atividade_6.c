#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strupr(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void strlwr(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

void toggleCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char str[200];
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    
    toggleCase(str);
    printf("\ncaixa invertida: %s\n", str);
    
    strupr(str);
    printf("maiúsculas: %s\n", str);
    
    strlwr(str);
    printf("minúsculas: %s\n", str);
    
    return 0;
}
