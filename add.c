#include"header.h"

/*********************************************
Add a node in single linked list
Input: Head pointer
Output: Addition of node at last
**********************************************/

u32 rollno;

void stu_add(SLL **ptr)
{

	SLL *new,*last=*ptr;

	new=malloc(sizeof(SLL));
	if (new == 0)
	{
		perror("malloc");
		return;
	}
	printf("Enter the Name : ");
	scanf(" %19[^\n]",new->name);
	printf("Enter the Percentage : ");
	if(scanf(" %f",&new->per)==0)
	{     
	 s32 ch;
	 while ((ch = getchar()) != '\n' && ch != EOF);
	 printf("\n\033[1;31m Entry for percentage failed!\033[0m\n");
	 free(new);
	 return;
	}

	if(*ptr == 0)
	{
		new->rollno=++rollno;
		*ptr=new;
		new->next=0;
		printf("\nSuccessfully added as first node\n");
		printf("\n %u %s %.2f \n",new->rollno,new->name,new->per);
		return;
	}
	while(last->next)
		last=last->next;

	last->next=new;
	new->next=0;
	new->rollno=++rollno;

	printf("\nSuccessfully added\n");
	printf("\n %u %s %.2f \n",new->rollno,new->name,new->per);
}






