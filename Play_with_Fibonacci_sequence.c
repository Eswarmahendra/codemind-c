#include<stdio.h>
void fiboSeq(int n, int a, int b);
int main()
{
    int n, a=0, b=1;
    scanf("%d",&n);
    if(n > 0)
    {
        printf("%d ",0);
        n--;
    }
    if(n > 0)
    {
        printf("%d ",1);
        n--;
    }
    if(n > 0)
        fiboSeq(n,a,b);
    return 0;
}

void fiboSeq(int n, int a, int b)
{
    int i = 0;
    int c;
    while(i < n)
    {
        c = a+b;
        printf("%d ",c);
        i++;
        a = b;
        b = c;
    }
}