#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int n,i; 
    scanf("%d", &n);
    
    float m=0,z=0,p=0,p1,p2,p3,a[100];
    for (i=0;i<n;i++) 
    {
       scanf("%f",&a[i]);
    }
    
    for (i=0;i<n;i++) 
    {
        if (a[i]==0)
       {
           z=z+1;
       }
       else if (a[i]>0)
       {
           p=p+1;
       }
       else if (a[i]<0)
       {
           m=m+1;
       }
                
    }
        p1=p/n;
        p2=m/n;
        p3=z/n;
        printf ("%f\n", p1);
        printf ("%f\n", p2);
        printf ("%f\n", p3);   
    
}
