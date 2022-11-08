#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^
]s",s);
    int c = 0;
    for(int i=0; i<strlen(s); i++)
    {
        if((int)s[i] >= 48 && (int)s[i] <= 57)
            c++;
    }
    if(c > 0)
        printf("Contains %d digit",c);
    else
        printf("Doesn't contain digit");
    return 0;
}