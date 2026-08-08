#include"header.h"

/*********************************************
Delete all single linked list
Input: Head pointer
Output: Delete all nodes
**********************************************/

void delete_all(SLL **ptr)
{
	char op;
	printf("\n Are you sure to delete all the students record (y/n) :  ");
	scanf(" %c",&op);
	if(op=='y' || op=='Y')
	{
		SLL *t=*ptr;
		if((*ptr)==0)
		{
			printf("\n\033[1;31mNo records Found\033[0m\n");
			return ;
		}

		delete0(t);
		*ptr=0;
		rollno=0;
		printf("\n All Records Deleted Successfully\n");
	}
}

void delete0(SLL *t)
{
    SLL *temp;

    while(t)
    {
        temp = t;
        t = t->next;
        free(temp);
    }
}


