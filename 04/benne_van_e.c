#include <stdio.h>

void tomb_kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
    
}

int contains(const int n, const int tomb[], const int k)
{
    for (int i = 0; i < n; i++)
    {
        if (tomb[i] == k)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int szamok[10] = {5, 4, 93, 35, 0, -2, -34, 45, 7, 3};
    int meret = 10;

    puts("Szamok:");
    tomb_kiir(meret, szamok);
    printf("1 benne van-e? %d\n", contains(meret, szamok, 1));
    printf("5 benne van-e? %d\n", contains(meret, szamok, 5));

    return 0;
}
