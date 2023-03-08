#include <stdlib.h>
# include <stdio.h>
int main(){
    int a,b;
    char operator;
   scanf("%d %c %d",&a,&operator ,&b);

  switch(operator){
  case '+':
        printf("%d",a+b);
        break;
 case '-':
        printf("%d",a-b);
        break;
 case '*':
        printf("%d",a*b);
        break;
 case '/':
        printf("%d",a/b);
        break;
 default:
    printf("invalid input");
    break;

  }
}
