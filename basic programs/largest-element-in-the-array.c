#include <stdio.h>
#include <string.h>

int main() {
    int arr[100], size, i, max;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for ( i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    
    printf("%d is the largest element in the array", max);
    return 0;
}