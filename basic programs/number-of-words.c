#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, count = 0;
    printf("Enter a string:");
    fgets(str, 100, stdin);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            count++;
        }
        
    }
    printf("There are %d words in the string.", count);
    return 0;
}