# include <stdio.h>
int main(){
   int n,factorial=1 ;
   printf("enter number : ");
   scanf("%d",&n);
   if(n < 0){
    printf("invalid input");
    return 0;
   }
   for(int i =n;i>=1;i--){
    factorial*=i;
   }
printf("factorial of %d is %d",n,factorial);
    return 0;
}
