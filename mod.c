#include"header.h"

/*********************************************
Save and Exit || Exit without Saving
Input: Head pointer
Output: Exit
**********************************************/

void stu_mod(SLL **ptr)
{
	if((*ptr)==0)
	{
		printf("\n\033[1;31mNo records Found\033[0m\n");
		return;
	}

	u8 op,flag=0;
	s8 n[20];
	u32 r;
	f32 p;
	SLL *last,*del;

	while(1)
	{ 
		printf("\n choose option for modify \n a : Based on Rollno.\n b : Based on Name\n c : Based on Percentage\n d : Return to main menu \n");
		scanf(" %c",&op);

		if(op=='a' || op=='A')
		{
			printf("Enter the Rollno. : ");
			scanf(" %u",&r);
			if(rollno_mod(*ptr,r)==0)
			{
				printf(" Rollno not found\n");	
			}
			else
				return;	
		}

		else if(op=='b' || op=='B')
		{
			printf("Enter the Name : ");
			scanf(" %19[^\n]",n);
			del=*ptr;
			while(del)
			{
				if(strcmp(n,del->name)==0)
				{
					if(flag==0)
					{
						printf("\n Record found \n");	
					}
					printf("%u %s %f \n",del->rollno,del->name,del->per);
					flag++;
					last=del;
				}
				del=del->next;
			}		
			if(flag==1)
			{
				printf("Enter the Name to modify : ");
				scanf(" %19[^\n]",last->name);
				printf("Enter the Percentage to modify : ");
				scanf(" %f",&last->per);
				printf("Succesfully modified \n");
				printf(" %u  %s  %f \n",last->rollno,last->name,last->per);
				return;	
			}
			else if(flag==0)
			{
				printf(" Name not found\n");
			}
			else
			{
				printf("\n Multiplr records found for same name \n");
				printf("\n Enter the rollno. to modify :  \n");	
				scanf(" %u",&r);						
				rollno_mod(*ptr,r);
				return;
			}
		}
		else if(op=='c' || op=='C')
		{
			printf("Enter the Percentage : ");
			scanf(" %f",&p);
			del=*ptr;
			while(del)
			{
				if(p==del->per)
				{
					if(flag==0)
					{
						printf("\n Record found \n");	
					}
					printf("%u %s %f \n",del->rollno,del->name,del->per);
					flag++;
					last=del;
				}
				del=del->next;
			}	
			if(flag==1)
			{
				printf("Enter the Name to modify : ");
				scanf(" %19[^\n]",last->name);
				printf("Enter the Percentage to modify : ");
				scanf(" %f",&last->per);
				printf("Succesfully modified \n");
				printf(" %u  %s  %f \n",last->rollno,last->name,last->per);
				return;	
			}
			else if(flag==0)
			{
				printf(" Percentage not found\n");
			}
			else
			{
				printf("\n Multiplr records found for same Percentage \n");
				printf("\n Enter the rollno. to modify :  \n");	
				scanf(" %u",&r);						
				rollno_mod(*ptr,r);
				return;
			}		
		}
		else if(op=='d' || op=='D')
		{
			return;
		}
		else
		{
			printf("\n Unknown choice \n");	
		}
	}
}	

u8 rollno_mod(SLL *ptr,u32 r)
{
	SLL *last=ptr;

	while(last)
	{
		if(last->rollno==r)
		{
			printf("Student Found \n");
			printf(" %u  %s  %f \n",last->rollno,last->name,last->per);
			printf("Enter the Name to modify : ");
			scanf(" %19[^\n]",last->name);
			printf("Enter the Percentage to modify : ");
			scanf(" %f",&last->per);
			printf("Succesfully modified \n");
			printf(" %u  %s  %f \n",last->rollno,last->name,last->per);
			return 1;
		}
		last=last->next;
	}
	return 0;
}			





