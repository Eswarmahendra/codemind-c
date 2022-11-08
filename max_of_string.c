#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],s='a';
    scanf("%[^
]",str);
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i] > s)
            s = str[i];
    }
    printf("%c",s);
    return 0;
}