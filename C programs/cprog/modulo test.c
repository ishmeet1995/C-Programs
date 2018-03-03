#include<stdio.h>

int main()
{
    int a;
    printf("enter value of a\n");
    scanf("%d",&a);

    int b=5;
    int c=(b+a-1)%a;
    printf("%d",c);
}
