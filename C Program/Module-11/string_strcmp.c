#include<stdio.h>
int main ()
{
     char a[100],b[100];
     scanf("%s %s",&a,&b);
    int v= strcmp(a,b);
     if(v<0)
     {
        printf("A Is Smaller\n");
     }
     else if(v>0)
     {
        printf("B Is Smaller\n");
     }
     else 
     {
        printf("Same\n");
     }

    return 0; 
}