#include<stdio.h>
void extractsum(int num)
{
  int firstDigit=num/1000;
  int lastDigit=num%10;
  int result= firstDigit+lastDigit;
  printf("%d\n",result);
}

int main ()
{
    int n,m;
    scanf("%d %d",&n,&m);   //input:1234 output:5
    extractsum(n);
   
    
    return 0; 
}