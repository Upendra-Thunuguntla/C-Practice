#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int c,n,fact=1;
    scanf ("%d",&n);
    while (n!=0)
    {
        fact = n* fact;
        n--;
    }
    printf ("%d",fact);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
