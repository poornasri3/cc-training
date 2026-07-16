#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    switch(a)
    {
        case 'A' ... 'Z':
        printf("Uppercase Alphabets");
        break;
        case 'a' ... 'z':
        printf("Lowercase Alphabets");
        break;
        case '0' ... '9':
        printf("Numbers");
        break;
    }
}