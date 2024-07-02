// 
#include<stdio.h>
int extractsum(int num)
{
  int firstDigit=num/1000;
  int lastDigit=num%10;
  int result= firstDigit+lastDigit;
  return result;
}

int main ()
{
    int n,m;
    scanf("%d %d",&n,&m);   //input:1234 output:5
    int result=extractsum(n);
    printf("%d\n",result);
    
    return 0; 
}