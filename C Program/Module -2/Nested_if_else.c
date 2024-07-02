#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("Coxs Bazar jabo");
        if(tk>=10000)
        {
            printf("\nSaint Martin Jabo"); 
        } 

        else
            {
                printf("\nFire Asbo");
            }         
    }
    else
    {
        printf("Kothao Jabo na");
    }
    return 0;
}