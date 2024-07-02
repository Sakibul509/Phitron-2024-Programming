#include<stdio.h>
int main ()
{
     int n;
     scanf("%d",&n) ;
     int ar[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&ar[i]);
     }
     int count=0;
     
     
        for(int i=0;i<n;i++)
       {
          if( ar[i]%2==0)
         {
         count++;
         }
       }
     
       printf("%d ",count);
       int count1=0;
       for(int i=0;i<n;i++)
       {
           if(ar[i]%3==0&&ar[i]%2!=0)
           
             count1++;
           
       }
       printf("%d",count1);
     
       
    return 0; 
}