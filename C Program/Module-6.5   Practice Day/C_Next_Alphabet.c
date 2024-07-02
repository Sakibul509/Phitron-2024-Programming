#include<stdio.h>
int main ()
{
     char letter;
     scanf("%c",&letter);
     if(letter==122)
     {
         printf("a\n");
     }
     else
      {
        char letter2=letter+1;
       
        printf("%c\n",letter2);
      }
    return 0; 
}