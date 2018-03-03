#include  <conio.h>
#include <stdio.h>
int main()
{
	int arr[100],x,pos,n,y,item;
	printf("enter no of elements \n");
	scanf("%d",&n);
	
	printf("enter contents of array\n");
	for(y=0;y<n;y++)
	scanf("%d",&arr[y]);
	
	printf("enter POS where data is to be entered\n");
	scanf("%d",&pos);
	
	printf("enter item to be inserted\n");
	scanf( "%d",&item   );
	
	for(x=n;x<pos;x--)
	{
		arr[x+1]=arr[x];
	}
	
	arr[pos]=item;
	
	for(y=0;y<n+1;y++)
	printf("%d\n",arr[y]);

	
}
