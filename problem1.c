#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
    int base,expo,power;
   printf("enter base : ");
   scanf("%d",&base);
   printf("enter expo : ");
   scanf("%d",&expo);
   power=pow(base,expo);
   printf("power = %d",power);
    return 0;
}