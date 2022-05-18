#include <stdio.h>

void tomb_kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
    
}

void swap(const int n, int tomb[])
{
    int i = 0;
    int j = n - 1;
    int tmp;

    while(i < j)
    {
        tmp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = tmp;
        
        i++;
        j--;
    }

}

int main()
{
    int szamok[10] = {5, 4, 93, 35, 0, -2, -34, 45, 7, 3};
    int meret = 10;

    puts("Elotte:");
    tomb_kiir(meret, szamok);

    swap(meret, szamok);

    puts("Utanna:");
    tomb_kiir(meret, szamok);
    
    return 0;
}
