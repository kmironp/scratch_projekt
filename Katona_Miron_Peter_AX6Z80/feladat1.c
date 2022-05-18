#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "prog1.h"
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        printf("\n");
    }

    int droot = 0;
    int sum = 0;
    for (int i = 1; i < argc; i++)
    {
        string s = argv[i];
        int hossz = strlen(s - 1);
        for (int i = 0; i < hossz; i++)
        {
            if(isdigit(s[i]))
            {
                char db = (s[i]);
                string szam = (db + '\0');
                int jo = atoi(szam);
                sum = sum + jo;
            }
            if(sum == 0)
            {
                printf("%s: 0", argv[i]);
            }
            while(sum != 0)
            {
                int digit = sum % 10;
                droot += digit;
                sum /=10;
                if(sum == 0 && droot > 9)
                {
                    sum = droot;
                    droot = 0;
                    printf("%s: %d", argv[i], droot);
                }
            }
        }
    }
    
    
   return 0;
}
