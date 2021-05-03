#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,j,i; 
    scanf("%i", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
      
          scanf("%i",&a[i][j]);
       }
    }
    int s1=0,s2=0,res=0;
   for(int i = 0, j = n-1; i < n; i++, j--){
    s1 += a[i][i];
    s2 += a[j][i];
}
    res = s1 - s2;
    res = abs (res);
    
    printf("%d\n", res);
    
}
