#include<stdio.h>
float getpi(void)
{
    return 3.1416;
}
int main ()
{
    float pi=getpi();
    printf("%f",pi*2*2);
    
     
    return 0; 
}