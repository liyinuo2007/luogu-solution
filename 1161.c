#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        double a;
        int t;
        scanf("%lf%d",&a,&t);
        for(int j=1;j<=t;j++)
        {
            int k=floor(a*j+1e-9);
            ans^=k;
        }
    }
    printf("%d\n",ans);
    return 0;
}