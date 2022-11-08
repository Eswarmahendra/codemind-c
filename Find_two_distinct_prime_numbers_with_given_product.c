#include<stdio.h>
#include<math.h>
bool isPrime(int n);
int main()
{
    int n, p=0;
    scanf("%d",&n);
    for(int i=2; i<=(n/2); i++)
    {
        if(n%i == 0)
        {
            if(isPrime(i) && isPrime(n/i))
            {
                p = 1;
                printf("%d %d",i,n/i);
                break;
            }
        }
    }
    if(p == 0)
        printf("%d",-1);
}

bool isPrime(int n)
{
    if(n == 1)
        return false;
    for(int i=2; i<=(pow(n,0.5)); i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}