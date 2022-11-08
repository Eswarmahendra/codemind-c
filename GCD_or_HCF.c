#include<stdio.h>
int hcf(int a, int b);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = hcf(a,b);
    printf("%d",ans);
    return 0;
}

int hcf(int a, int b)
{
    int min,max;
    if(a < b)
    {
        min = a;
        max = b;
    }
    else
    {
        max = a;
        min = b;
    }
    for(int i=min; i>=1; i--)
    {
        if(min%i == 0 && max%i == 0)
            return i;
    }
    return 1;
}