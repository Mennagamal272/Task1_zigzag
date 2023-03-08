#include <stdlib.h>
# include <stdio.h>
int main(){
    int num;
   printf("enter number : ");
   scanf("%d",&num);
   printf("\t\tmultiplication table\n");
   printf("%d|",num);
   for(int i=1;i<=12;i++)
   printf("%-7d",num*i);
    return 0;
}