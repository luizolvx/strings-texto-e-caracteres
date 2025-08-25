#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i;
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    
    printf("String em maiúsculas: %s\n", str);
    
    return 0;
}
