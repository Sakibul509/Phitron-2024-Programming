#include<stdio.h>
#include<string.h>

// void fun(int *ar,int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",ar[i]);
//     }
//     printf("\n");
//     ar[0]=500;
// }
// int main ()
// {
//      int ar[5]={10,20,30,40,50};
//      fun(ar,5);
//      for(int i=0;i<5;i++)
//      {
//         printf("%d ",ar[i]);
//      }
//     return 0; 
// }

     void fun(char *ar)
    {
      ar[0]='G';
    }
    int main()
    {
        char ar[20]="Hello";
        fun(ar);
        printf("%s",ar);

        return 0;

    }
