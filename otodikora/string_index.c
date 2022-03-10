#include <stdio.h>
#include "prog1.h"
#include <string.h>

int string_index(string s, char c)
{
    int i = 0;
    int j = strlen(s) - 1;

    while (i <= j)
    {
        if (s[i] == c)
        {
            return i;
            break;
        }
        i++;
        j--;
    }
    return -1;
}

int bennevane(string s, char c)
{
    int i = 0;
    int j = strlen(s) - 1;

    while (i <= j)
    {
        if (s[i] == c)
        {
            return 1;
            break;
        }
        i++;
        j--;
    }
    return 0;
}

// vagy

int bennevane(string s, char c)
{
    return string_index(szo, c) >= 0;
}

int main()
{
    string szo = "programozas";
    char c = 'r';

    printf("%d\n", string_index(szo, c));
    printf("%d\n", bennevane(szo, c));

    return 0;
}