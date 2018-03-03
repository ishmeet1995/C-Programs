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
	int n;
	int x;




	for (x=0;x<5;x++)
		{
			node *temp2=(node *) malloc(sizeof(node));
			printf("enter %d data\n",x);
			scanf("%d",&temp2->num);
			temp2->link=NULL;

            temp2->link=a;
            a=temp2;

		}

    node *current,*prev,*next;
    current=a;
    prev=NULL;
    while(current !=NULL)
    {
        next=current->link;   // saving next link address here temporarily
        current->link=prev;    // pointing current one to next one
        prev=current;           // resetting current and next pointers coz they need to store the values of next
        current=next;           // node in the list
    }
    a=prev;

	while (a != NULL)
	{
		printf("%d \n",a->num);
		a=a->link;
	}
return(0);
}
