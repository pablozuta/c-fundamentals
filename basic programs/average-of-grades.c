#include <stdio.h>

struct student {
    char name[50];
    int grade;
};

int main() {
    int size, i, sum = 0;
    float avg;
    struct student s[100];
    printf("Enter the number of students: ");
    scanf("%d", &size);
    printf("Enter the students names and grades\n");

    for (i = 0; i < size; i++)
    {
        scanf("%s %d", s[i].name, &s[i].grade);
        sum += s[i].grade;
    }
    avg = (float) sum / size;
    printf("Average grade %.2f\n", avg);
    printf("Students Names:\n");
    for (i = 0; i < size; i++)
    {
        printf("%s\n", s[i].name);
    }
    
    return 0;
}