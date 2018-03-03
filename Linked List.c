#include<stdio.h>
#include<stdlib.h> //lib for malloc


typedef struct mylist { 
int name;
struct mylist *node;
}Struc;

int main()
{
	Struc *a = (Struc *) malloc(sizeof(Struc)) ; //type casting
	Struc *b = (Struc *) malloc(sizeof(Struc)) ; //type casting
	Struc *c = (Struc *) malloc(sizeof(Struc)) ; //type casting
	
	a -> node=NULL;
	b -> node=NULL;
	c -> node=NULL;
	
	printf("enter data for a \n");
	scanf("%d", &a -> name);
	printf("enter data for b \n");
	scanf("%d", &b -> name);
	printf("enter data for c \n");
	scanf("%d", &c -> name);
	
	a -> node=b;
	b -> node=c;
	
	//printf("%d",a -> node -> name);
	
	//loop to print all char of linked list
	while(a != NULL)		// till a hasn't reached the end of the list 
	{
		printf("%d \n",a -> name);
		a=a ->node;	// store value or address of b in first execution and then cin second execution
	}
	
	free(c);
	free(b);
	free(a);
	printf("%d %d %d",a,b,c);
	return(0);
	
}

