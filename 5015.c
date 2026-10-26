#include<stdio.h>
int main()
{
    int count=0;
    int c;
    while((c=getchar())!=EOF)
    {
        if(c!=' '&&c!='\n'&&c!='\r')
        count++;
    }
    printf("%d",count);
    return 0;
}