#include<stdio.h>
int calcFact(int n, int i, int fact);
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int j=0; j<t; j++)
    {
        int i=1, fact=1;
        scanf("%d",&n);
        int ans = calcFact(n,i,fact);
        printf("%d
",ans);
    }
    return 0;
}
    
int calcFact(int n, int i, int fact)
{
    fact = fact*i;
    if(i == n)
        return fact;
    i++;
    return calcFact(n,i,fact);
}