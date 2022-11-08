#include<stdio.h>
#include<math.h>
bool happyNum(int n);
int main()
{
    int n;
    scanf("%d",&n);
    if(happyNum(n))
        printf("True");
    else
        printf("False");
    return 0;
}

bool happyNum(int n)
{
    int temp = n;
    int sum = 0;
    while(temp > 0)
    {
        sum += pow(temp%10,2);
        temp = temp/10;
    }
    n = sum;
    if(log10(n) < 1)
    {
        if(n == 1 || n == 7)
            return true;
        else
            return false;
    }
    return happyNum(n);
}