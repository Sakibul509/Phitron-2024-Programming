#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{
    //  double x;
    //  scanf("%lf",&x);

    //   int ans = ceil(x); //input:3.99,3.00001 output:4,4

    // int ans= floor(x);   //input:3.0001,3.999 output:3,3

    // int ans = round(x);   //input:3.5,3.499 output:4,3 

    //  float ans=sqrt(x);      //input:25,16 output:5,4
     
    // double x,y;
    // scanf("%lf %lf",&x,&y);

    // double ans=pow(x,y);  //input:3 4 output:81

     int x;
     scanf("%d",&x);

     int ans=abs(x);  // input:-100 output:100

     printf("%d",ans);
    //  printf("%.5lf\n",ans);
    return 0; 
}