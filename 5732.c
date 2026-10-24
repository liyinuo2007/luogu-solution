#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100][100];
    for(int i=0;i<n;i++)
    {
    arr[i][0]=arr[i][i]=1;
    for(int j=1;j<i;j++)
    {
        arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
    }
       }
       for(int i=0;i<n;i++)
       {
       for(int j=0;j<=i;j++)
    printf("%d ",arr[i][j]);
printf("\n");
}
return 0;
}