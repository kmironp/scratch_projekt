#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void feltolt(const int n, int matrix[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = rand() % (243 - 125 + 1) + 125;
        }
    }
}

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

int main(int argc, char *argv[])
{
    srand(1234);
    if (argc != 3)
    {
        fprintf(stderr, "Hibás paraméterezés!\n");
        exit(1);
    }
    int sor1 = atoi(argv[1]);
    int sor2 = atoi(argv[2]);
    if (sor1 < 1 || sor1 > 10 || sor2 < 1 || sor2 > 10)
    {
        fprintf(stderr, "Az értéknek az [1, 10] intervallumból kell kikerülniük!\n");
        exit(2);
    }

    sor1 = sor1 - 1;
    sor2 = sor2 - 1;

    printf("Eredeti:\n");
    int matrix[SIZE][SIZE];
    feltolt(SIZE, matrix);
    kiir(SIZE, matrix);

    puts("");
    printf("Modositott:\n");

    int tomb1[SIZE];
    int tomb2[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        tomb1[i] = matrix[sor1][i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        tomb2[i] = matrix[sor2][i];
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        matrix[sor1][i] = tomb2[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        matrix[sor2][i] = tomb1[i];
    }

    kiir(SIZE, matrix);

    return 0;
}