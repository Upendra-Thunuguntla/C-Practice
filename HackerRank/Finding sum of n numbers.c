#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int sum=0,n;
    scanf ("%d",&n);
    while (n!=0)
    {
        sum += n;
        n--;
    }
    printf ("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
