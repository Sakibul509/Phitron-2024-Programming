#include<stdio.h>
int main ()
{
     long long int eye,mouth,body;
     scanf("%lld%lld%lld",&eye,&mouth,&body);
     long long int  min=0;
       if(eye<mouth && eye<body)
       {
         min=eye;
       }
       else if(mouth<eye&&mouth<body)
       {
        min=mouth;
       }
       else if(body<eye&&body<mouth)
       {
        min=body;
       }
       long long int newEye=(eye-min)/2;
       long long int newMouth=mouth-min;
       long long int newBody=body-min;
       if(newEye<=newBody)
       {
         printf("%lld\n",newEye+min);
       }
        else if(newBody<newEye)
        {
            printf("%lld\n",newBody+min);
        }

    return 0; 
}