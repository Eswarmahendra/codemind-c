#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%400 != 0)
    {
        if(n%100 != 0)
        {
            if(n%4 == 0)
                printf("%s","True");
            else
                printf("%s","False");
        }
        else
            printf("%s","False");
    }
    else
        printf("%s","True");
}