#include <stdio.h>
#include <ctype.h>
#include <string.h> // for strcpy

typedef char String[100]; // define a string as an array of characters

// Converts all lowercase letters in the given string to uppercase
void to_upper(String str)
{
    // Iterate through the string and convert each lowercase letter to uppercase
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }
}

int main()
{
    String str;
    strcpy(str, "Hello, World"); // Copy the string literal into str

    printf("Original string: %s\n", str);

    to_upper(str); // Convert the string to uppercase

    printf("Uppercase string: %s\n", str);

    return 0;
}
