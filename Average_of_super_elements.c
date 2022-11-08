#include<stdio.h>
int main()
{
    int n, d = 0;
    float avg = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<n; i++)
    {
        int c = 0;
        for(int j=0; j<n; j++)
        {
            if(arr[i] == arr[j])
                c++;
        }
        if(c == arr[i] && arr[i] != -9999)
        {
            d++;
            avg += arr[i];
            arr[i] = -9999;
        }
    }
    if(d != 0)
        printf("%.2f",float(avg/d));
    else
        printf("%d",-1);
    return 0;
}