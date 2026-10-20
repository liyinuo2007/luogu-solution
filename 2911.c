#include<stdio.h>
int main()
{
    int s1,s2,s3;
    scanf("%d%d%d",&s1,&s2,&s3);
    int arr[s1];
    for(int i=0;i<s1;i++) arr[i]=i+1;
    int brr[s2];
    for(int i=0;i<s2;i++) brr[i]=i+1;
    int crr[s3];
    for(int i=0;i<s3;i++) crr[i]=i+1;

    int a=3;
    int b=s1+s2+s3;
    int cnt[100]={0};

    for(int i=0;i<s1;i++)
        for(int j=0;j<s2;j++)
            for(int k=0;k<s3;k++)
                cnt[arr[i]+brr[j]+crr[k]]++;

    int maxcnt=0, ans=a;          // ← 提到三重循环外
    for(int q=a; q<=b; q++)       // ← 只扫一次
        if(cnt[q] > maxcnt) {
            maxcnt=cnt[q];
            ans=q;
        }

    printf("%d\n", ans);
    return 0;
}