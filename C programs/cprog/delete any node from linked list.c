///////////////entering element at ending of linked list

#include <stdio.h>
#include<stdlib.h>
typedef struct list{
	int num;
	struct list *link;
}node;

int main()

{
	node  *a=NULL;   // zeroth node to hold address of first data;
	int n,x,del;





	for (x=0;x<5;x++)
		{
			node *temp2=(node *) malloc(sizeof(node));
			printf("enter %d data\n",x);
			scanf("%d",&temp2->num);
            temp2->link=NULL;
            temp2->link=a;
            a=temp2;

		}


    int z;
    node *temp3=a;
	printf("enter node's position that you want to delete\n");
	scanf("%d",&del);

	for(z=1;z<=del-2;z++)
	{
        temp3=temp3->link;
	}

	temp3->link=temp3->link->link;







while (a != NULL)
	{
		printf("%d ",a->num);
		a=a->link;
	}
}
