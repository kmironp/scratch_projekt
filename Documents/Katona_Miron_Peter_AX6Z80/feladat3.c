#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

#define SIZE 16

void kiir(const int n, int matrix[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        puts("");
    }
}

int main()
{
    FILE *f=fopen("szamok.csv","r");

    char sor[SIZE];
    char *p;

    int min = INT_MAX;
    int max = INT_MIN;

    int matrix[SIZE][SIZE];

    while(fgets(sor,SIZE,f)!=NULL)
    {
        sor[strlen(sor) - 1] = '\0';
        p=strtok(sor,"\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[0][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[1][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[2][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[3][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[4][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[5][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[6][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[7][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[8][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[9][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[10][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[11][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[12][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[13][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[14][i] = atoi(p);
            }
        }
        p = strtok(NULL, "\t");
        {
            for (int i = 0; i < SIZE; i++)
            {
                matrix[15][i] = atoi(p);
            }
        }

    }

    kiir(SIZE, matrix);
    
    fclose(f);

    return 0;
}