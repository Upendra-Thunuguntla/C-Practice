#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,fib=0,i=0;
    scanf ("%d",&n);
    while (i!=n)
    {
    printf ("%d",fib);
        fib += n;
        i++;
    
    }
    printf ("%d",fib);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
