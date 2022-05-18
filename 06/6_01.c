#include <stdio.h>

#define SIZE 26

// void feltolt(char tomb[])
// {
//     for (int i = 0; i < SIZE; i++)
//     {
//         tomb[i] = 'a' + i;
//     }
    
// }

void feltolt(char tomb[])
{
    for (char c = 'a'; c <= 'z'; c++)
    {
        tomb[c - 'a'] = c;
    }
}

int main()
{
    char abc[SIZE];
    feltolt(abc);
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("%c ", abc[i]);
   
    }
    puts(" ");

    return 0;
}
