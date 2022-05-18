#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int grade_generator()
{
    int random = rand();
    int intervallum = 5 - 1 + 1;

    random = random % intervallum;
    random = random + 1;

    return random;

}

void inform(int n, int students[])
{
    int egy = 0;
    int ketto = 0;
    int harom = 0;
    int negy = 0;
    int ot = 0;

    for (int i = 0; i < n; i++)
    {
        if(students[i] == 1)
        {
            egy++;
        }
        if(students[i] == 2)
        {
            ketto++;
        }
        if(students[i] == 3)
        {
            harom++;
        }
        if(students[i] == 4)
        {
            negy++;
        }
        if(students[i] == 5)
        {
            ot++;
        }
    }
    
    
    int jegyek [5] = {egy, ketto, harom, negy, ot};

    printf("A dolgozat mar ki is lett javitva.\n");
    printf("Az alabbi eredmegyek szulettek:\n");
    printf("1-es: %d fo\n", jegyek[0]);
    printf("2-es: %d fo\n", jegyek[1]);
    printf("3-as: %d fo\n", jegyek[2]);
    printf("4-es: %d fo\n", jegyek[3]);
    printf("5-os: %d fo\n", jegyek[4]);
}

int main()
{
    srand(2022);

    int hallgatok_szama;
    printf("Hallgatoi letszam: ");
    scanf("%d", &hallgatok_szama);
    printf("\n");

    int tomb[hallgatok_szama];
    for (int i = 0; i < hallgatok_szama; i++)
    {
        tomb[i] = grade_generator();
    }

    inform(hallgatok_szama, tomb);

    return 0;
}
