#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
int n, ar_size=0, sum=0,i;
int ar[100];
     
	scanf ("%d", &n);
    for (i=0;i<n;i++)
    {
	scanf ("%d",&ar[n]);
	sum+=ar[n];
    }
    printf ("%d",sum);
}

