#include<stdio.h>
#include<stdlib.h> //lib for malloc


typedef struct list { 
int name;
struct list *link;
}struc;

struc *get_address();

int main()
{
	struc *a = get_address();
	
	
	struc *temp= a;
	
	
	int c;
		
		while ( 1 )
		{
			printf("\n enter data");
			scanf("%d", &a->name);
			
			printf("\n do you want to enter more?");
			c= getchar();
			
				if( c=='n' || c=='N')
				 	{ 
				 		a -> link= NULL;
				 		break;
				 	}
				a ->link=get_address;
				a= a -> link; // not necessry , just to ensure that compiler is not confused
				
				
		}
		a=temp;
		while(a != NULL)		// till a hasn't reached the end of the list 
	{
		printf("%d \n",a -> name);
		a=a ->link;	// store value or address of b in first execution and then cin second execution
	}
}

struc *get_address()
{
	return((struc *)malloc(sizeof(struc)));
}
