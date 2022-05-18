#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int randrange(int lo, int hi)
{
    int random = rand();
    int intervallum = lo - hi;

    random = random % intervallum;
    random = random + lo;

    return random;
}

int randint()
{
    int random = rand();
    int intervallum = INT_MAX - 1 + 1;

    random = random % intervallum;
    random = random + 1;

    return random;
}

int main()
{
    srand(time(NULL));

    int lo;
    printf("Alsó határ (zárt) [e - exit]: ");
    scanf("%d", &lo);
    int hi;
    printf("Felső határ (nyílt): ");
    scanf("%d", &hi);

    int randomszor;
    while(lo == 'e');
    {
        if((lo == hi) || (lo > hi))
        {
            printf("Hibásan megadott intervallum!");
        }
        randomszor = randint();
        if(lo != 'e')
        {
            printf("Elemek szama: %d\n", randomszor);
            for (int i = 0; i < randomszor; i++)
            {
                printf("%d ", randrange(lo, hi));
            }
            
        }

    }
    if(lo == 'e')
    {
        printf("\n");
    }
    
    return 0;
}
