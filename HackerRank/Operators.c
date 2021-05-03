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
   float total=0,meal,tax,tip;
    scanf ("%f%f%f",&meal,&tip,&tax);
    tip = tip*(meal/100);
    tax = tax * (meal/100);
    total = meal+tip+tax;
    printf ("The total meal cost is %.0f dollars.",round(total));
            return (0);
}
