///////////////entering element at ending of linked list

#include <stdio.h>
#include<stdlib.h>
typedef struct list{
	int num;
	struct list *link;
}node;

int main()

{
	node  *a;
	int n,m;
	int x;




	for (x=0;x<5;x++)
		{
			node *temp=(node *) malloc(sizeof(node));
            node *temp2=a;
			printf("enter %d data\n",x);
			scanf("%d",&temp->num);
            temp->link=NULL;
            printf("enter position \n");
            scanf("%d",&n);

            if(n==1)
            {
                temp->link=a;
                a=temp;
            }
            else
            {

                    for(m=0;m<=n-2;m++)
                    {
                        temp2=temp2->link;        //temp pointing at n-1th mode
                    }
                    temp->link=temp2->link;
                    temp2->link=temp;
            }


		}

	while (a != NULL)
	{
		printf("%d->",a->num);
		a=a->link;
	}

}
