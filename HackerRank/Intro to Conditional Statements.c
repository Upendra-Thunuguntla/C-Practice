#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char st;
    scanf ("%d",&n);
    if (n%2==0)
    {
        if ((n<5)||(n>20))
            printf ("Not Weird");
        else 
            printf ("Weird");
    }
    else 
        printf ("Weird");
    
    return (0);
}

