#include"header.h"

int main()
{
	s8 op;
	SLL *headptr=0;
	readFile(&headptr);
	while(1)
	{
		printf("\n\033[1;30;43m ***** STUDENT RECORD MENU ***** \033[0m\n\033[1;33m_________________________________\033[0m\n\n\033[32m a : add new record\n d : delete a record\n s : show the list\n m : modify a record\n v : save\n e : Exit\n t : sort the list\n l : delete all records\n r : reverse the list\033[0m\n\n Enter your choice: ");
                
	 
		scanf(" %c",&op);

		if(op>='a' && op<='z')
			op-=32;

		switch(op)
		{
			case 'A' : stu_add(&headptr);break;
			case 'D' : if(stu_del(&headptr))
					   printf("\n Succesfully deleted \n");break;
			case 'S' : stu_show(headptr);break;
			case 'M' : stu_mod(&headptr);break;
			case 'V' : writeFile(headptr);break;
			case 'E' : exit_(&headptr);break;
			case 'T' : sort(&headptr);break;
			case 'L' : delete_all(&headptr);break;		
			case 'R' : reverse(&headptr);break;
			default : printf("Unknown choice\n");
		}




	}

}	


