#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
       int k;
       scanf("%d\n",&k);
       int ar[k];
       for(int i=0;i<k;i++)
       {
         scanf("%d",& ar[i]);
       }
       int x;
       scanf("%d",&x);
       int count=0;
         for(int i=0;i<k;i++)
         {
           if(ar[i]==x)
           {
               count=1;
               break;
           }
         }
         if(count)
           {
               printf("YES\n");
           }
         else 
         {
             printf("NO\n");
         }
       
       
       
    }
}