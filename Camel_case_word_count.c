#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[200];
    scanf("%[^
]",str);
    int c = 0;
    for(int i=0; i<strlen(str); i++)
    {
        if(isupper(str[i]))
            c++;
    }
    if(islower(str[0]))
        c++;
    printf("%d",c);
    return 0;
}