#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    if(a>='a' && a<='z')
    printf("Lowercase Alphapets");
    else if(a>='A' && a<='Z')
    printf("Uppercase Alphapets");
    else
    printf("Numbers");
    return 0;
}