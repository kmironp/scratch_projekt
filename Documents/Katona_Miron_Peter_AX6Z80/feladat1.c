#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 200

int main()
{
    FILE *f = fopen("numbers.txt", "r");

    printf("numbers.txt sikeresen megnyitva\n");
    printf("számok vizsgálata...\n");

    FILE *out = fopen("out.txt", "w");
    if (out == NULL)
    {
        fprintf(stderr, "Hiba2");
        exit(1);
    }

    char sor[SIZE];
    int szamok[SIZE];
    char *p;
    int k = 0;
    
    while (fgets(sor, SIZE, f) != NULL)
    {
        sor[strlen(sor) - 1] = '\0';
        p = strtok(sor,"\n");
        szamok[k] = atoi(p);
        k++;

    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", szamok[i]);
    }
    
    int osszeg = 2022;
    int szum = 0;

    for (int i = 0; i < (SIZE - 1); i++)
    {
        for (int j = (i + 1); j < SIZE; j++)
        {
            szum = szamok[i] + szamok[j];
            if(szum == osszeg)
            {
                fprintf(out,"%d\n", szamok[i]);
                fprintf(out,"%d", szamok[j]);
            }
        }
    }
    puts("vizsgalat befejeződött");

    fclose(f);

    fclose(out);
    
    puts("out.txt allomany letrehozva");

    return 0;
}