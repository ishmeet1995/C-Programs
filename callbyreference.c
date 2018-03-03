#include <stdio.h>

void increment(int *a)
{ 
	*a=*a+1;
	
	printf("%d\n",a);
}

int main()
{
	int a;
	 a=5;
	increment(&a);
	printf("%d\n",a);
	
}
