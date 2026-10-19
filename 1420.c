#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
int cnt=0;
int max_cnt=1;
for(int i=0;i<n-1;i++)
{
    if(arr[i]==arr[i+1]-1)
{
    cnt++;
}
}
if(cnt>max_cnt)
max_cnt=cnt;
printf("%d",max_cnt);
return 0;
}