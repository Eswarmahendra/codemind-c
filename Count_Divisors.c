#include<stdio.h>
int main()
{
    int l,r,k;
    scanf("%d",&l);
    scanf("%d",&r);
    scanf("%d",&k);
    int c = 0;
    for(int i=l; i<=r; i++)
    {
        if(i%k == 0)
            c++;
    }
    printf("%d",c);
}