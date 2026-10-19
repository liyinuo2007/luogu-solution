#include<stdio.h>
int main()
{
    int arr[12];
    for(int i=0;i<12;i++)
    {
        scanf("%d",&arr[i]);
    }
    int year=0;
    int sum=0;
    for(int i=0;i<12;i++)
    {
        year+=(300-arr[i]);
        if(year<0)
        {
            printf("-%d",i+1);
            return 0;
        }
        else
        {
            sum+=(year/100)*100;
            year%=100;
        } }
        printf("%d",sum+sum/5+year);
        return 0;
    }