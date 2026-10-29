#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n][100];
    int arr[100];
    int max=0;
    for(int i=0;i<n;i++)
    scanf("%s",&s[i]);
    int b=0;;
    for(int i=0;i<n;i++)
    {
        arr[i]=strlen(s[i]);
        if(max<arr[i])
        {
            max=arr[i];
            b=i;
        }
    }
    printf("The longest is: %s",s[b]);
    return 0;
}