#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i+=1)
    {
       /* if(i==5)
        {
          continue;     
        }*/
        printf("%d\n",i);
        if(i==5)
        {
             continue;    //যখন কন্টিনিউ প্রিন্টের নিচে থাকবে তখন কন্টিনিউ কাজ করবেনা 
        }

    }
}