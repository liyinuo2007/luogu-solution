#include<stdio.h>
int main()
{
    double eps;
    scanf("%lf",&eps);
    double sum=0;
    for(int i=1;;i+=3)
    {
    double a=1.0/i;
    int b=(i%2==1)?1:-1;
    if(a>eps)
    {
        sum+=(a*b);
    }
    else 
    {
        sum+=(a*b);
        break;
    }
    }
    printf("sum = %.6f\n",sum);
    return 0;
}