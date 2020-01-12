#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_WORD 16
#define MAX_KIDS 1000

char templ[MAX_WORD];
int evals[MAX_KIDS];
int keys[MAX_KIDS];
int nwords;

int cmp(const void* aa, const void* bb)
{
    int a = *((int*)aa);
    int b = *((int*)bb);

    if (evals[a] != evals[b])
        return evals[b] - evals[a];
    return a - b;
}

int eval(char word[])
{
    int l = strlen(templ);
    int i;
    int sum = 0;

    if (strlen(word) != l)
        return 0;

    for (i=0; i<l; ++i) {
        char a = word[i];
        char b = templ[i];
        if (a == b)
            sum += 100;
        else if (toupper(a) == toupper(b)) {
            if (toupper(a)=='T')
                sum += 40;
            else
                sum += 70;
        } else if (index("wnmur",a) && index("wnmur",b))
            sum += 50;
        else if (index("bdg",a) && index("bdg",b))
            sum += 45;
        else if (index("xr",a) && index("xr",b))
            sum += 30;
    }
    return sum;
}

int main()
{
    int d,i;
    scanf("%d\n", &d);
    while (d--) {
        scanf("%s\n%d", templ, &nwords);
        //printf("%s\n", templ);
        for (i=0; i<nwords; ++i) {
            char word[MAX_WORD];
            scanf("%s\n", word);
            evals[i] = eval(word);
            //printf("%s %d\n", word, evals[i]);
            keys[i] = i;
        }
        scanf("\n");

        qsort(keys, nwords, sizeof(int), cmp);

        for (i=0; i<nwords; ++i)
            printf("%d ", keys[i]+1);
        printf("\n");
    }
    return 0;
}
