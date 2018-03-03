#include <stdio.h>
#include<stdlib.h>
typedef struct list{
	int num;
	struct list *link;
}node;

int main()

{
	node *a= (node *) malloc(sizeof(node));
	node *temp;
	int x;
	a->link=NULL;
/*	printf("enter number of elements \n");
	scanf("%d",n); */
	temp=a;
	for (x=0;x<5;x++)
		{
			printf("enter %d data\n",x);
			scanf("%d",a->num);

			if(x==4)
			{
		 		a-> link=NULL;

			}

				a->link=(node *) malloc(sizeof(node));

		}

		a=temp;
	printf("%d \n",a->link->num);
	while (a != NULL)
	{
		printf("%d \n",a->num);
		//a=a->link;

	}

}
