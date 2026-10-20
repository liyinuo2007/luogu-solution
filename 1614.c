#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[1000000];
    int a=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i+m<=n;i++)
    {
        if(i==0)
    for(int j=0;j<m;j++)
    {
        a+=arr[j];
    }
    int b=0;
    for(int j=i;j<i+m;j++)
    b+=arr[j];
    if(b<a)
    {
        int t=a;
        a=b;
        b=t;
    }
    }
    printf("%d\n",a);
    return 0;
}