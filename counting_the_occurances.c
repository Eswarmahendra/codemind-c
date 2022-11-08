#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^
]",s);
    char ch;
    scanf(" %c",&ch);
    int c = 0;
    for(int i=0; s[i] != NULL; i++)
    {
        if(ch == s[i])
            c++;
    }
    if(c == 0)
        printf("-1");
    else
        printf("%d",c);
}