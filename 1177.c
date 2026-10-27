#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        printf("%d",arr[i]);
        else
        printf(" %d",arr[i]);
    }
    return 0;
}