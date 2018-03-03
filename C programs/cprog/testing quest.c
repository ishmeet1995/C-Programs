#include<stdio.h>

int main()
{
    int x=0;
    static int y=0;
    y=y+1;
    x=x+1;

    printf("%d \n %d",x,y);
}
