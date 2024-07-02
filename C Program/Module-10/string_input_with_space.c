#include<stdio.h>
#include<string.h>
int main ()
{
     /*char ar[6];
     gets(ar);
     printf("%s",ar);
     */
     char ar[100];
     fgets(ar,20,stdin);
     printf("%s\n",ar);
    return 0; 
}