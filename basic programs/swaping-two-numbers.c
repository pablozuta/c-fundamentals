#include <stdio.h>

void swap(int *a, int *b ) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swaping: x=%d y=%d\n", x, y);
    swap(&x, &y);
    printf("After swaping: x=%d y=%d", x, y);
    return 0;
}