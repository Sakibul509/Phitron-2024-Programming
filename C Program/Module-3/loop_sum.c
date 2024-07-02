#include<stdio.h>
int main()
{
    long long sum=0;
    int i;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i+=1)
    {
         sum+=i;        //n*(n+1)/2 --1 theke n porjonto sonkhar jogfol.
         printf("%lld\n",sum);

    }
     printf("Total Sum Is:%lld\n",sum);
}