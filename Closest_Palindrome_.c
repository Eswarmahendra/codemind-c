#include<stdio.h>
int nextPalin(int n);
int prevPalin(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int prev = prevPalin(n);
    int next = nextPalin(n);
    if(n-prev > next-n)
        printf("%d",next);
    else if(n-prev < next-n)
        printf("%d",prev);
    else
        printf("%d %d",prev,next);
    return 0;
}

int prevPalin(int n)
{
    for(int i=n-1;;i--)
    {
        int temp = i;
        int rev = 0;
        while(temp > 0)
        {
            rev = rev*10 + temp%10;
            temp = temp/10;
        }
        if(rev == i)
            return i;
    }
}

int nextPalin(int n)
{
    for(int i=n+1;;i++)
    {
        int temp = i;
        int rev = 0;
        while(temp > 0)
        {
            rev = rev*10 + temp%10;
            temp = temp/10;
        }
        if(rev == i)
            return i;
    }
}