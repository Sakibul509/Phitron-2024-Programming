#include<stdio.h>
int main ()
{    
    // char ar[5]={'S','a','k','i','b'};

     /*int ar[5]="Sakib"
     for(int i=0;i<5;i++)
     {

       printf("%c",ar[i]);
     }
     */

     char ar[]="Sakib";
    //  char ar[6]="sakib\0" 
    int siz=sizeof(ar)/sizeof(char);
    printf("%d\n",siz);
     printf("%s",ar);
    return 0; 
}