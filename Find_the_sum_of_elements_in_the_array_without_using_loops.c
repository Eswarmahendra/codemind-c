#include<stdio.h>
int main()
{
    int n, c = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        c += arr[i];
    }
    printf("%d",c);
    return 0;
}