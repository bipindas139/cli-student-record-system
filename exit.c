#include"header.h"

/*********************************************
Save and Exit || Exit without Saving
Input: Head pointer
Output: Exit
**********************************************/

void exit_(SLL **ptr)
{ 
	u8 op;
	{
		printf("\n a : Save and Exit \n b : Exit without Saving\n c : Return to main menu\n\n Enter the option : ");
		scanf(" %c",&op);

		if(op=='A' || op=='a')
		{
			writeFile(*ptr);
			if (*ptr)
			{
				SLL *t=*ptr;
				delete0(t);
				*ptr=0;
			}
			exit(0);

		}
		else if(op=='b' || op=='B')
		{
			if (*ptr)
			{
				SLL *t=*ptr;
				delete0(t);
				*ptr=0;
			}
			printf(" Exiting......\n");
			exit(0);
		}
		else if(op=='C' || op=='c')
		{
			return;
		}
		else
		{
			printf(" Unknown option selected \n");	
		}
	}
}	
