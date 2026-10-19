#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[10000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    for(int j=0;j<n-i-1;j++)
{
    if(arr[j]>arr[j+1])
    {
        int t=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;
    }
}
printf("%d\n",arr[n-1]-arr[0]);
return 0;
}