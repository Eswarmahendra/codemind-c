#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        char arr[5000];
        scanf("%s",arr);
        int c = 0;
        for(int i=0; i<strlen(arr); i++)
        {
            char ch = arr[i];
            if(isdigit(ch))
            {
                c += 1;
            }
        }
        if(c > 0)
            printf("Yes
");
        else
            printf("No
");
    }
    return 0;
}