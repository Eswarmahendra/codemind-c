#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int temp;
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<n-1;)
    {
        printf("%d",arr[i+1]);
        printf(" ");
        printf("%d",arr[i]);
        printf(" ");
        i = i+2;
    }
    if(n%2 != 0)
        printf("%d",arr[n-1]);
    return 0;
}