#include <stdio.h>

int main()
{
    int num, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0) // % is the remaining of a division
        {
            flag = 1;
            break;
        }
    }
    if (num == 1)
    {
        printf("Number 1 is not a prime number\n");
    }
    else
    {
        if (flag == 0)
        {
            printf("%d is a prime number", num);
        }
        else
        {
            printf("%d is NOT a prime number", num);
        }
    }
    return 0;
}