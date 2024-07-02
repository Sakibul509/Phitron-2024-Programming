#include<stdio.h>
int main ()
{
     int A;
     scanf("%d",&A);
     int ans= A/1000;
     if(ans%2==0)
     {
        printf("EVEN\n");
     }
     else 
     {
         printf("ODD\n");
     }
    return 0; 
}