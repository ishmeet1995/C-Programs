#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max 50
char arr[max];
int top=-1;

void checking(char *c,int n)
{
    int i,temp_top=0;
    int error=0;

    for(i=0;i<n;i++)
    {
        if((c[i]=='{') || (c[i]=='}') || (c[i]=='(') || (c[i]==')'))
            {
                top++;

                arr[top]=c[i];
            }
    }
    printf("%s",arr);
    printf("\n");


for(i=0;i<=top;i++)
{


    if(arr[temp_top]=='{')
        {
            if(arr[top]=='}')
            {

                temp_top++;
                top--;

            }
            else{
                error=1;

            }
        }
        else if(arr[temp_top]=='(')
        {
            if(arr[top]==')')
            {

                temp_top++;
                top--;

            }
            else{
                error=1;

            }
        }
    if(error==1)
    {
        printf("error");
        return;
    }
    else
        printf("success");

}
}
int main()
{
    char c[50];
    puts("enter expression");
    gets(c);

    checking(c,strlen(c));

}
