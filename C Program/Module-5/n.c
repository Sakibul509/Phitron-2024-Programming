#include<stdio.h>
int main ()
{
     char X;
     scanf("%c",&X);
     if(X>='A' && X<='Z')
     {
     char ans=X+32;
     printf("%c",ans);
     }
     else
     {
         char ans=X-32;
         printf("%c",ans);
     }

    return 0; 
}