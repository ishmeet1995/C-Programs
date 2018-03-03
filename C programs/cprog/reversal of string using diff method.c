#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char c[50];
    char temp[50];
    puts("enter string \n");
    gets(c);

    int i=0;
    int j=strlen(c)-1;
    printf(" %d,%d\n",i,j);

    if(i!=j)
    {
        temp[i]=c[i];
        c[i]=c[j];
        c[j]=temp[i];
        i++;
        j--;
    }
    printf("%s",c);



}
