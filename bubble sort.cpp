#include <stdio.h>
#include <conio.h>
int main()
{
	int arr[4],x,j,y,temp=0;
	printf("enter 4 elements \n");
	for(x=0;x<4;x++)
	{
		scanf("%d",&arr[x]);
	}

	for(y=0;y<4;y++)
	{
	
	for(j=0;j<4-y;j++)
		{
		if(arr[j]<arr[j+1])
			{ 
			temp=arr[j];
			arr[j]= arr[j+1];
			arr[j+1]=temp;
			}
		
		}
	}
	for(x=0;x<4;x++)
	{
		printf("sorted array is\n%d \n",arr[x]);
	}
	getch();
}
