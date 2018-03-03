///////////////entering element at ending of linked list

#include <stdio.h>
#include<stdlib.h>
typedef struct list{
	int num;
	struct list *link;
}node;

int main()

{
	node *temp, *a= (node *) malloc(sizeof(node));
	int n;
	int x;
	a->link=NULL;
	printf("enter number of elements \n");
	scanf("%d",n);
	temp=a;
	
	for (x=0;x<n;x++)
		{
			printf("enter %d data\n",x);
			scanf("%d",&a->num);

			if(x==(n-1))
			{
		 		a-> link=NULL;
		 		a=a->link;

			}
			else
			{
				a-> link=(node *) malloc(sizeof(node));
				a=a->link;
			}
		}
		a=temp;
	while (a != NULL)
	{
		printf("%d \n",a->num);
		a=a->link;
	}

}

