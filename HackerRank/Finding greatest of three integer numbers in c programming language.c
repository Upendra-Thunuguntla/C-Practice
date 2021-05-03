#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    scanf ("%d,%d,%d",&a,&b,&c);
    if ((a>b)&&(a>c))
        printf ("%d\n",a);
    else if ((b>c)&&(b>a))
        printf ("%d\n",b);
    else
        printf ("%d\n",c);
    
    return 0;
}
