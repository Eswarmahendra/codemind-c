#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,m;
    scanf("%d %d %d",&a,&b,&m);
    printf("%d",int(pow(a,b))%m);
}