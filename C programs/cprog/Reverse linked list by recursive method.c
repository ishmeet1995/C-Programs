///////////////entering element at ending of linked list

#include <stdio.h>
#include<stdlib.h>
typedef struct list{
	int num;
	struct list *link;
}node;
node  *a=NULL;   // zeroth node to hold address of first data;


void reverse( node *prev, node *cur)
{
   if(cur){
      reverse(cur,cur->link);
      cur->link = prev;
    }
    else{
      a = prev;
    }
}

int main()

{

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
reverse(NULL,a);

	while (a != NULL)
	{
		printf("%d \n",a->num);
		a=a->link;
	}
return(0);
}

