#include<stdio.h>
int main ()
{
     int n,k,s;
     scanf("%d",&n);
     s=n-1;
     k=1;
     for(int i=1;i<=2*n-1;i++)
     {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        if(i%2==1)
        {
        for(int j=1;j<=k;j++)
         {
            printf("#");
         }
        }
        
       else if(i%2==0)
       {
        for(int j=1;j<=k;j++)
        {
            printf("-");
        }
       }
        if(i<=n-1)
        {
            k+=2;
            s--;
        }
        else 
        {
            k-=2;
            s++;
        }
        
        // if(i<n||i>=n)
        // {
          printf("\n");
        // }
     }

     
     
    return 0; 
}