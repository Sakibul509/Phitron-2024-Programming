#include<stdio.h>
int main ()
{
     int n;
     scanf("%d",&n);
     int ar[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&ar[i]);
     }
        int sum=0,sum1=0;
    
        for(int i=0;i<n;i++)
        {
         if(ar[i]>0)
         {
        sum=sum+ar[i];
         }
        }
        for(int i=0;i<n;i++)
        {
          if(ar[i]<0)
          {
        sum1=sum1+ar[i];
          }
        }
     
     printf("%d %d",sum,sum1);
    return 0; 
}