#include<stdio.h>
int main()
{
    int poornaa;
    scanf("%d",&poornaa);
    (poornaa%9==0)?printf("9"):printf("%d",(poornaa%9));
    return 0;
}