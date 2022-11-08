#include<stdio.h>
void recursive(int n, int i);
int main()
{
    int n, i = 1;
    scanf("%d",&n);
    recursive(n,i);
    return 0;
}

void recursive(int n, int i)
{
    if(n <= 0 || n > 10000)
        printf("%s","The Number Series is Not Possible Print");
    else
    {
        printf("%d ",i);
        if(i != n)
        {
            i++;
            recursive(n,i);
        }
        
    }
}