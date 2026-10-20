#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[1000];
    int cnt=0;
    int flag[1000]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                for(int k=0;k<n;k++)
                if(j!=k&&i!=k)
                {
                    if(arr[i]==arr[j]+arr[k]&&flag[i]!=1)
                    {
                        cnt++;
                        flag[i]=1;
                    }
                }
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
}