#include <stdio.h>
#include <string.h>

#define SIZE 200

int main()
{
    printf("Kerek egy szoveget: ");
    char text[SIZE];
    
    fgets(text, SIZE, stdin);
    text[strlen(text)- 1] = '\0';

    printf("%s\n", text);

    return 0;
}