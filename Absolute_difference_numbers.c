#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int last = pow(10,b);
    int first = pow(10,(int(log10(a)+1)-b));
    printf("%d",abs((a/first)-(a%last)));
    return 0;
}