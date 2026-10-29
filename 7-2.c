#include<stdio.h>
int main()
{
    int n,m;
    if(scanf("%d%d",&n,&m)!=2)
    return 0;
    int arr[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    if(scanf("%d",&arr[i][j])!=1)
    return 0;
    int fond=0;
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<m-1;j++)
        {
            if(arr[i][j]>arr[i][j-1]&&arr[i][j]>arr[i][j+1]&&arr[i][j]>arr[i-1][j]&&arr[i][j]>arr[i+1][j])
            {
                printf("%d %d %d\n",arr[i][j],i+1,j+1);
            fond=1;
        }
        }
    }
    if(!fond)
    printf("NONE %d %d\n",n,m);
    return 0;
}