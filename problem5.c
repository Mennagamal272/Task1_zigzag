#include <stdlib.h>
# include <stdio.h>
int main(){
    int a,b,c;
    int largest =0 ;
   printf("enter number1 : ");
   scanf("%d",&a);
   printf("enter number2 : ");
   scanf("%d",&b);
   printf("enter number3 : ");
   scanf("%d",&c);

   largest= (a>b && a>c)? (a) : ((b>c)? (b) : (c));
   printf("the largest nubmer = %d",largest);
   
}