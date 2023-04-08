#include <stdlib.h>
#include <stdio.h>

int main(void)
{
        int *p[10];
        int i = 0;
        while(i < 10)
        {
                p[i] = malloc(128);
                printf("%ld\n", (long)p[i]);
                i++;
        }
        i--;

        while (i >= 0){
            free(p[i]);
            i--;
        }
        return (0);
}
