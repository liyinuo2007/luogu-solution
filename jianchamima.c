#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n][100];
    for(int i=0;i<n;i++)
    fgets(s[i], sizeof(s[i]), stdin) ;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<strlen(s[i]);j++)
        {
            if(strlen(s[i])<6)
            printf("Your password is tai duan le.\n");
            else
            {
                if(s[i][j]>'a'&&s[i][j]<'z'&&s[i][j]>'A'&&s[i][j]<'Z')
                printf("Your password needs shu zi.\n");
                if(s[i][j]>=0&&s[i][j]<=9)
                printf("Your password needs zi mu.\n");
                if(s[i][j]!='.')
                printf("Your password is tai luan le.\n");
                if(s[i][j]>'a'&&s[i][j]<'z'&&s[i][j]>'A'&&s[i][j]<'Z'&&s[i][j]>=0&&s[i][j]<=9&&s[i][j]!='.')
                printf("Your password is wan mei.\n");
            }
        }
    }
    return 0;
}