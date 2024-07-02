#include<stdio.h>
int count_before_one(int x)

{
    int ar[x];
    for(int i=1;i<=x;i++)
    {
        scanf("%d",&ar[i]);
    }
    int count1=0;
    
    for(int i=1;i<=x;i++)
    {
    if(ar[i]==1)
     {
        return count1;
         
     }
     else
     {
         count1++;
     }
    
    }
    return count1;
}
int main ()
{
     int n;
     scanf("%d",&n);
    int count= count_before_one(n);
    printf("%d",count);
     
     
     

    return 0; 
}