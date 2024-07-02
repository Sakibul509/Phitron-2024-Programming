#include<stdio.h>
 
int sum()   //sum(void) 
{
    int x,y;
    scanf("%d %d",&x,&y);
    int s=x+y;
    return s;

}

int main ()
{
    int s=sum() ;  //sum(100) likhle error asbe void use korar jonno
    printf("%d",s);
    return 0; 
}