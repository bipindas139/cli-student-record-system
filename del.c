#include"header.h"

/*********************************************
Delete a node in single linked list
Input: Head pointer
Output: Return 1 on succesfull Deletion or 0 on failure 
**********************************************/

u32 stu_del(SLL **ptr)
{
	if((*ptr)==0)
	{
		printf("\n\033[1;31mNo records Found\033[0m\n");
		return 0;
	}

	SLL *last=*ptr,*del=*ptr;
	s8 c,n[20],flag=0;
	u32 r;
	while(1){
		printf("\n  a : Based on rollno.\n  b : Based on name\n  c: Return to main menu\n\n  Enter option : ");
		scanf(" %c",&c);


		if(c=='A' || c=='a')
		{
			printf("  Enter the rollno : ");
			scanf(" %u",&r);
			if((*ptr)->next==0)
			{
				if(del->rollno == r)
				{
					*ptr=0;
					free(del);
					return 1;
				}
				else
				{
					printf(" Rollno : %u is not present \n",r);
					return 0;
				}
			}

			if(rollno_del(&(*ptr),r)==0)
			{
				printf(" Rollno : %u is not present \n",r);
				return 0;
			}
			else
				return 1;
		}

		else if(c=='B' || c=='b')
		{
			printf("  Enter the name : ");
			scanf(" %19[^\n]",n);


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
				del=last;
				if(*ptr==del)
				{
					if((*ptr)->next==0)
					{
						*ptr=0;
						free(del);
						return 1;
					}
					*ptr=del->next;
					rollno=del->rollno;
					last=del;
					while(last->next)
					{	
						last=last->next;
						last->rollno=rollno;
						++rollno;
					}
					free(del);
					return 1;

				}	
				last=*ptr; 	
				while(last->next != del)
					last=last->next;
				if(del->next==0)
				{
					last->next=0;
					free(del);
					return 1;
				}	
				last->next=del->next;
				rollno=del->rollno;
				last=del;
				while(last->next)
				{	
					last=last->next;
					last->rollno=rollno;
					++rollno;
				}
				free(del);
				return 1;				 		
			}
			else if(flag==0)
			{
				printf("\n\033[31m No Match Found for %s \033[0m\n",n);
				return 0;
			}
			else
			{
				printf(" Multiple matches found \n");
				printf(" Select the rollno. to delete : \n");
				scanf("%u",&r);
				del=*ptr;
				flag=0;
				return rollno_del(&(*ptr),r); 	
			}
		}
		else if( c=='c' || c=='C')
		{
			return 0;
		}	
		else
		{
			printf("\nUnknown Choice\n");
		}
	}
}

u8 rollno_del(SLL **ptr,u32 r)
{
	SLL *last=*ptr,*del=*ptr;
	while(del)
	{

		if(del->rollno == r)
		{
			if(del==*ptr)
			{
				*ptr=del->next;

				rollno=del->rollno;
				last=del;
				while(last->next)
				{	
					last=last->next;
					last->rollno=rollno;
					++rollno;
				}
				free(del);
				return 1;
			}

			last=*ptr;
			while(last->next != del)
				last=last->next;
			if(del->next==0)
			{
				last->next=0;
				free(del);
				return 1;
			}	
			last->next=del->next;
			rollno=del->rollno;
			last=del;
			while(last->next)
			{	
				last=last->next;
				last->rollno=rollno;
				++rollno;
			}
			free(del);
			return 1;
		}
		del=del->next;
	}
	return 0;
}
