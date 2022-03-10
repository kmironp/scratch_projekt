#include <stdio.h>
#include "prog1.h"
#include <string.h>

int my_strlen(string s)
{
    int cnt = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        cnt++;
    }
    return cnt;
}

int main()
{
    string s = "Hello"; 
    printf("Hossz: %d\n", (int)strlen(s)); // vagy %ld
    printf("Hossz: %d\n", my_strlen(s));

    return 0;
}