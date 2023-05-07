#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;
    printf("Enter a string:");
    fgets(str, 100, stdin);
    len = strlen(str) - 1;
    printf("Number of characters in the string: %d", len);
    return 0;

}