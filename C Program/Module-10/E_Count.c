#include<stdio.h>
int main ()
{
     char ar[1000001];
     scanf("%s",&ar);
     int sum=0;

     for(int i=0;i<strlen(ar);i++)
     {
        sum=sum+ar[i]-'0';
        
     }
     printf("%d\n",sum);
    return 0; 
}