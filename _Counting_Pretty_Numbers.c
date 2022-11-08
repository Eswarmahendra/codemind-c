#include<stdio.h>
int count(int x, int y);
int main()
{
    int t,a,b;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        printf("%d
",count(a,b));
    }
}

int count(int x, int y)
{
    int c = 0;
    for(int i=x; i<=y; i++)
    {
        if(i%10 == 2 || i%10 == 3 || i%10 == 9)
            c++;
    }
    return c;
}