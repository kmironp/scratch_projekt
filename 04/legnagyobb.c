#include <stdio.h>

void tomb_kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
    
}

int max(const int n, const int tomb[])
{
    int maxi = tomb[0];
    for (int i = 1; i < n; i++)
    {
        if (maxi < tomb[i])
        {
            maxi = tomb[i];
        }
    }

    return maxi;
    
}

int main()
{
    int szamok[10] = {5, 4, 93, 35, 0, -2, -34, 45, 7, 3};
    int meret = 10;

    puts("Elotte");
    tomb_kiir(meret, szamok);

    printf("A legnagyobb elem: %d\n", max(meret, szamok));
    

    return 0;
}
