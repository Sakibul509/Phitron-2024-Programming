#include<stdio.h>
int main ()
{
     const int a=10;
   int *b=&a;
   *b=0;
  printf("%d",a);
    return 0; 
}