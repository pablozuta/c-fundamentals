#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i , j;
    printf("Enter a string:");
    fgets(str, 100, stdin);
    len = strlen(str);
    j = len -1;
    for ( i = 0; i < len; i++) {
        rev[i] = str[j];
        j --;
    }
    rev[len] = '\0';
    printf("Reversed string : %s\n", rev);
    return 0;
    
}

