 #include <stdlib.h>
# include <stdio.h>
int main(){
 int x , y;
 printf("x = ");
 scanf("%d",&x);
 printf("y = ");
 scanf("%d",&y);
    // Code to swap 'x' and 'y'
    x = x - y; 
    y = x + y; 
    x = y - x; 
    printf("After Swapping: x = %d, y = %d\n" ,x, y);

    return 0;
    }