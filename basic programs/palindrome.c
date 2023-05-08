#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len, i, j, flag = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    len = strlen(str);

    j = len - 2;
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
        j--;
    }
    if (flag == 0)
    {
        printf("Yes!, String is a Palindrome.");
    }
    else
    {
        printf("String is NOT a Palindrome.");
    }

    return 0;
}