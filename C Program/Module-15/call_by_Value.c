#include<stdio.h>
void fun(int x)
{
    x=200;
    printf("%d\n",x);
}
int main ()
{
     int x=10;
     printf("main er x er add-%p\n",&x);
     fun(x);
     printf("main er x er value-%d\n",x);
    return 0; 
}