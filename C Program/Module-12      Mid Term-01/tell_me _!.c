#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
while(t--)
{
    int n;
    scanf("%d", &n);
    long long int ar[n];
    for (int i=0; i<n;i++)
    {
        scanf("%lld", &ar[i]);
    }
    long long int x;
    scanf("%lld", &x);
    int count=0;
    for (int i=0; i<n;i++)
    {
        if(ar[i]==x){
            count=1;
            break;
        }
    }
    if (count)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
    return 0;
}