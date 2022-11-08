#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000], ans[1000];
    scanf("%s",str);
    for(int i=0; i<strlen(str); i++)
    {
        if((int)str[i] >= 97 && (int)str[i] <= 122)
            printf("%c",str[i]);
        else
        {
            char ch = (int)str[i] + 32;
            printf("%c",ch);
        }
    }
    return 0;
}