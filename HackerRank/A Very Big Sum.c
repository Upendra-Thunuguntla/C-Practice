#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main ()
{
	int n,i=0;
	long int a[100],sum=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%ld", &a[i]);
	}
	for (i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	printf ("%ld",sum);
}