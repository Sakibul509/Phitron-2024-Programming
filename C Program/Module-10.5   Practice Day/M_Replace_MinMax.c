#include<stdio.h>
#include<limits.h>
int main ()
{
     int n;
     scanf("%d",&n);
     int ar[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&ar[i]);
     }
      int min= INT_MAX,max=INT_MIN;
      int min_index,max_index;
     for(int i=0;i<n;i++)
     {
        if(ar[i]>max)
        {
        max=ar[i];
        max_index=i;
        }
        if(ar[i]<min)
         {
            min=ar[i];
            min_index=i;
         }
     }  
     int temp=ar[min_index];
        ar[min_index]=ar[max_index];
        ar[max_index]=temp;
     for(int i=0;i<n;i++)
     {
        
        printf("%d ",ar[i]);
     }

    return 0; 
}