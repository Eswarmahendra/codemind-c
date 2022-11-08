#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char ref[11] = "aeiouAEIOU";
    char dig[11] = "0123456789";
    scanf("%[^
]",s);
    int v=0, c=0, d=0, w=0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U')
            v++;
        else if(s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9' || s[i] == '0')
            d++;
        else if(s[i] == ' ')
            w++;
        else
            c++;
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d",w);
    return 0;
}