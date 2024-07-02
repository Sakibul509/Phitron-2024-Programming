#include<stdio.h>
#include<string.h>
int main ()
{
     char a[100],b[100];
     scanf("%s %s",&a,&b);
     int n;
     scanf("%d",&n);
     for(int i=0;i<=n;i++)
     {
        a[i]=b[i];
     }
     a[n]='\0';
     printf("%s %s",a,b);

    return 0; 
}