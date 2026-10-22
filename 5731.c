#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[10][10]={0};
    int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int x=0,y=0;
    int d=0;
    for(int i=1;i<=n*n;i++)
    {
        a[x][y]=i;
        int nx=x+dir[d][0];
        int ny=y+dir[d][1];
        if(nx<0||nx>=n||ny<0||ny>=n||a[nx][ny]!=0)
        {
            d=(d+1)%4;
        }
        x+=dir[d][0];
    y+=dir[d][1];
}
        for(int j=0;j<n;j++)
           {
            for(int k=0;k<n;k++)
                printf("%3d",a[j][k]);
                 printf("\n");
    }
    return 0;
    }
