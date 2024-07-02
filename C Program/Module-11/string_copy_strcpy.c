#include<stdio.h>
#include<string.h>
int main ()
{
     char a[100],b[100];
     scanf("%s %s",&a,&b);
     strcpy(a,b);
      a[3]='\0';
      b[0]='\0';
     printf("a=%s  b=%s",a,b);

    return 0; 
}