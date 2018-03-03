#include<conio.h>
#include<stdio.h>

int main()
{

	int a[3],x;
	a[0]=1;
	a[1]=2;
	a[2]=3;
	
	for( x=0; x<=6; x++)
	{
		printf("value of a[%d]=%d \n",x,a[x]);
	}
	
	getch();
}
