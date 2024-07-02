#include<stdio.h>
#include<string.h>
int main ()
{
     int T;
     scanf("%d",&T);
     for(int i=0;i<T;i++)
     { 
        char s[10001];
        scanf("%s",&s);
     

     int cap =0;
     int small=0;
     int digit=0;
     for(int i=0;i<strlen(s);i++)
     {
        if(s[i]>='A'&&s[i]<='Z')
        {
            cap++;
        }
        if(s[i]>='a'&&s[i]<='z')
        {
            small++;
        }
        if(s[i]>='0'&&s[i]<='9')
        {
            digit++;
        }
     }
     printf("%d %d %d\n",cap,small,digit);
   }
    return 0; 
}