#include <stdio.h>

struct book
{
    char title[50];
    char author[50];
    int year;
};


int main() {
    struct book b;
    printf("Enter the book title: ");
    scanf("%[^\n]%*c", b.title); 
    printf("Enter the book author: ");
    scanf("%[^\n]%*c", b.author); 
    printf("Enter the year the book was published: ");
    scanf("%d", &b.year); 
    printf("Book information: \n");
    printf("Book Title: %s\n", b.title);
    printf("Book Author: %s\n", b.author);
    printf("Book Year: %d\n", b.year);
    return 0;
}