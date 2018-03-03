#include  <conio.h>
#include <stdio.h>
int main()
{
	int arr[100],x,pos,n,y;
	printf("enter no of elements \n");
	scanf("%d",&n);
	
	printf("enter contents of array\n");
	for(y=0;y<n;y++)
	scanf("%d",&arr[y]);
	
	printf("enter POS where data is to be deleted\n");
	scanf("%d",&pos);
	
	
	for(x=pos;x<=n;x++)
	{
		arr[x]=arr[x+1];
	}
	
	
	
	
	for(y=0;y<n-1;y++)
	printf("arr[%d]=%d\n",y,arr[y]);

	
}
