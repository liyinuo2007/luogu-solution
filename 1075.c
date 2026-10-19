#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
          m=n/i;
          break;
        }
    }
    printf("%d\n",m);
    return 0;
}