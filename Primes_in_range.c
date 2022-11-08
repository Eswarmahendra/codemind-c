#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int count = 0;
    if(a < 2)
        a = 2;
    for(int i=a; i<=b; i++)
    {
        int c = 0;
        for(int j=2; j<=(int)sqrt(i); j++)
        {
            if(i%j == 0)
            {
                c = 1;
                break;
            }
        }
        if(c == 0)
            count++;
    }
    printf("%d",count);
    return 0;
}