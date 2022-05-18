#include <stdio.h>
#include "prog1.h"
#include <string.h>

int string_palindrome(string s)
{
    int i = 0;
    int j = strlen(s) - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

/*forral

int string_palindrome(string s)
{
    for(int i = 0; j = strlen(s) - 1; i < j; i++, j--)
    {
        if(s[i] != s[j])
        {
            return 0;
        }
    }
    return 1;
}

*/

int main()
{
    string szo = "kek";

    printf("%s palindrome? %s\n", szo, string_palindrome(szo) ? "igen" : "nem");

    return 0;
}
