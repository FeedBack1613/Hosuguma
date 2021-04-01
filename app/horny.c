#include <stdio.h>
#include <math.h>
#include "horny.h"
void horny(float a, float b, float c) {



d=b*b-4*a*c;
if(d>0) {
x1 =(-b+sqrt(d))/(2*a);
x2 =(-b-sqrt(d))/(2*a);
printf("korny= %f, %f\n",x1, x2); }
else if (d == 0) {
x1 = (-1)*b/(2*a);
printf("koren= %f\n",x1);
} else{
printf("net korney\n");
}
printf("d,%f",d);
printf("x1,%f\n",x1);
printf("x2,%f\n",x2);
return;
}
