#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    scanf("%s",&ch);
    int a=0, b=0;
    for(int i=0; i<strlen(ch); i++)
    {
        int n = ch[i]-'0';
        if(n%2 == 0)
            a++;
        else
            b++;
    }
    if(a > 0 && b > 0)
        printf("%s","Mixed");
    else if(a > 0 && b == 0)
        printf("%s","Even");
    else
        printf("%s","Odd");
}