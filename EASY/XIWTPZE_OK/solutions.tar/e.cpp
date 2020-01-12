#include <stdio.h>
#include <math.h>

unsigned pow3(int k)
{
    unsigned r = 1;
    int i;
    for (i=0; i<k; ++i)
        r*=3;
    return r;
}

int main()
{
    int d;
    scanf("%d", &d);
    while (d--) {
        unsigned N, K;
        scanf("%u%u", &N, &K);
        if (N==0)
            printf("TAK\n");
        else if (N==1 || N==2)
            printf("NIE\n");
        else if (K>=21)
            printf("TAK\n");
        else if (K==0)
            printf("NIE\n");
        else if ((pow3(K)-3)/2 >= N)
            printf("TAK\n");
        else
            printf("NIE\n");
    }
    return 0;
}
