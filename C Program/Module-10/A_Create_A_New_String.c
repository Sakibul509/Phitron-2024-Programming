#include<stdio.h>
#include<string.h>
int main ()
{
     char ar[1001];
     scanf("%s",&ar);
     int str=strlen(ar);
     char ar1[1001];
     scanf("%s",&ar1);
     int str1=strlen(ar1);
     printf("%d %d\n%s %s\n",str,str1,ar,ar1);


    return 0; 
}