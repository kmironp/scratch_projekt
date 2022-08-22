#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//PTI-s hallgato

#define SIZE 100

#define BUFFER 10

int beolvasas(char sor[SIZE], char *nev)
{
    int index = 0;

   FILE *f = fopen("nevek.csv", "r");

    if (f == NULL)
    {
        fprintf(stderr, "BAJ VAN\n");
        exit(1);
    }

    while (fgets(sor, SIZE, f) != NULL)
    {
        nev = strtok(sor, ",;");
        
    }
    fclose(f);

    return index; 
}

int main()
{
    char sor[SIZE];
    char *nev;

    int sorok_szama = belvasas(sor,nev);

    printf("%s ", nev);

    return 0;
}