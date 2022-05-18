#include <stdio.h>

void tomb_kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
    
}

int is_palindrome(const int n, int tomb[])
{
    int i = 0;
    int j = n - 1;
    int tmp;

    while(i < j)
    {
        if (tomb[i] != tomb[j])
        {
            return 0;
        }
                
        i++;
        j--;

    }

    return 1;

}

int main()
{
    int t1[5] = {1, 3, 5, 3, 1};
    int t2[5] = {23, 3, 45, 3, 24};
    int t1_meret = 5;
    int t2_meret = 5;

    puts("T1:");
    tomb_kiir(t1_meret, t1);
    printf("t1 palindrom? %s\n", is_palindrome(t1_meret, t1) ? "Igaz" : "Hamis" );

    puts("T2:");
    tomb_kiir(t2_meret, t2);
    printf("t1 palindrom? %s\n", is_palindrome(t2_meret, t2) ? "Igaz" : "Hamis" );
    
    return 0;
}
