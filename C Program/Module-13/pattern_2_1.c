#include<stdio.h>
int main ()
{
     int n,s,k;
     scanf("%d",&n);
     s=0;
     k=2*n-1; 
     for(int i=0;i<n;i++)
     {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        k=k-2;
        s++;
        printf("\n");
     }
    return 0; 
}