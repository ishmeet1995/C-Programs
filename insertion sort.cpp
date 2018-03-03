#include <conio.h>
#include <stdio.h>

int main()
{
	int a[6]= {5,1,6,2,4,3};
	int x,y,temp,z;
	
	for(x=0;x<6;x++)
	{
		z=x;
		while(z>0 && (a[z]<a[z-1]))
			{
				temp=a[z];
				a[z]=a[z-1];
				a[z-1]=temp;
				z--;
			}
			
	
	}
	for(y=0;y<6;y++)
	{
		printf("%d\n",a[y]);
	}
}
