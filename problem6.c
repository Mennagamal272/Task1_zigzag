#include <stdlib.h>
# include <stdio.h>
int main(){
    char c;
   printf("enter character : ");
   scanf("%c",&c);

   if( c == 'o' || c == 'a' || c == 'e' || c == 'u' || c == 'i'||c == 'O' || c == 'A' || c == 'E' || c == 'U' || c == 'I'){
        printf("the character is vowel");}
   else
        printf("the character is consonant");
    return 0;
}
