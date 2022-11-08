#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(float(pow(n,0.5)) - int(pow(n,0.5)) == 0)
        printf("%s","True");
    else
        printf("%s","False");
    return 0;
}