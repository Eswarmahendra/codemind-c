#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int c = 1;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i] == ' ')
            c++;
    }
    printf("%d",c);
    return 0;
}