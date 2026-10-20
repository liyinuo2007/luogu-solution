#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[10]={0};
    for(int i=n;i<=m;i++)
    {
        int b=i;
        while(b>0)
        {
        int a=b%10;
        arr[a]++;
        b/=10;
        }
    }
    for(int i=0;i<10;i++)
    printf("%d ",arr[i]);
    return 0;
}