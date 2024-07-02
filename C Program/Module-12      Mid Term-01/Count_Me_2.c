#include<stdio.h>
#include<string.h>

int main ()
                            // input: thefoxisgone
                            // output:7 
{
     char s[100000];                            
     scanf("%s",&s);
     int count =0;
     for(int i=0;i<strlen(s);i++)
     {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
        {
          count++;
        }
     
     }
     printf("%d\n",count);
    return 0; 
}