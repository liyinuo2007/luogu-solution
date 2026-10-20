#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    scanf("%s",arr);
    int len=strlen(arr);
    int back=0;
    for(int i=len-1;i>back;i--)
    {
        char t=arr[i];
        arr[i]=arr[back];
        arr[back]=t;
        back++;
    }
    printf("%s\n",arr);
    return 0;
}