#include<stdio.h>
int func(int n);
bool ispalin(int x);
int main()
{
    int n;
    scanf("%d",&n);
    int ans = func(n);
    printf("%d",ans);
    return 0;
}
bool ispalin(int x)
{
    int temp = x;
    int rev = 0;
    while(temp != 0)
    {
        rev = rev*10 + temp%10;
        temp = temp/10;
    }
    if(x == rev)
        return true;
    return false;
}
int func(int n)
{
    int temp = n;
    int addon = 0;
    while(temp != 0)
    {
        addon = addon*10 + temp%10;
        temp = temp/10;
    }
    n += addon;
    if(ispalin(n))
        return n;
    else
        return func(n);
}