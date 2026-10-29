#include<stdio.h>
#include<string.h>
int main()
{
    char s[100][100];
    int i=0;
    int b=0;
    while(i < 100 && scanf("%99s", s[i]) == 1 && strcmp(s[i], "#") != 0)
    {
        i++;
        b=i;
    }
    if(b==0)
    return 0;
    int lengh[b];
    for(int i=0;i<b;i++)
    {
        lengh[i]=(int)strlen(s[i]);
    }
    for(int i=0;i<b-1;i++)
    {
        for(int j=0;j<b-1-i;j++)
        {
            if(lengh[j]>lengh[j+1])
            {
                char t[100];
                strcpy(t, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], t);
                int tl = lengh[j];
                lengh[j] = lengh[j + 1];
                lengh[j + 1] = tl;
            }
        }
    }
    for(int i=0;i<b;i++)
    {
        printf("%s ",s[i]);
    }
    return 0;
}