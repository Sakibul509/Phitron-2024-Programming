#include<stdio.h>
int main ()
{
     int n,s,k;
     scanf("%d",&n);
     s=n+8;
     k=1;
     for(int i=0;i<n;i++)
     {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("Sakib");
        }
        s=s-2;
        k=k+1;
        printf("\n");
     }
    return 0; 
}