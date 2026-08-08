#include"header.h"

/*********************************************
Sort linked list as per Name or percentage
Input: Head pointer
Output: print sorted linked list on terminal
**********************************************/

void sort(SLL **ptr)
{ 	
	if((*ptr)==0)
	{
		printf("\n\033[1;31mNo records Found\033[0m\n");
		return ;
	}
	if((*ptr)->next==0)
	{
		printf("\n\033[1;32mOnly one record present\033[0m\n");
		stu_show(*ptr);
		return ;
	}
	u8 op;
	SLL *last=*ptr,temp,*prev;

	while(1)
	{
		printf(" a : sort as per Name\n b : sort as per Percentage \n c : Return to main menu\n\n Enter the option : ");
		scanf(" %c",&op); 

		if(op=='a' || op=='A')
		{     
			last=*ptr;
			while(last->next)
			{	
				prev=last->next;
				while(prev)
				{
					if(strcmp(last->name,prev->name)>0)
					{
						strcpy(temp.name,last->name);
						strcpy(last->name,prev->name);
						strcpy(prev->name,temp.name);

						temp.per=last->per;
						last->per =prev->per;
						prev->per=temp.per;

						temp.rollno=last->rollno;
						last->rollno =prev->rollno;
						prev->rollno=temp.rollno;
					}
					prev=prev->next;
				}
				last=last->next;
			}
			printf(" \n Sorting Completed \n");
			stu_show(*ptr);
			return;
		}
		else if(op=='b' || op=='B')
		{

			last=*ptr;
			while(last->next)
			{
				prev=last->next;
				while(prev)
				{
					if(last->per > prev->per)
					{
						strcpy(temp.name,last->name);
						strcpy(last->name,prev->name);
						strcpy(prev->name,temp.name);

						temp.per=last->per;
						last->per =prev->per;
						prev->per=temp.per;

						temp.rollno=last->rollno;
						last->rollno =prev->rollno;
						prev->rollno=temp.rollno;
					}
					prev=prev->next;
				}
				last=last->next;
			}
			printf(" \n Sorting Completed \n");
			stu_show(*ptr);
			return;
		}
		else if (op=='C' || op=='c')
		{
			return;
		}	
		else
		{
			printf(" \n Unknown choice \n");
		}
	}
}


