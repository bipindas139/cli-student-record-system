#include"header.h"

/*********************************************
Show linked list
Input: Head pointer
Output: print linked list on terminal
**********************************************/

void stu_show(SLL *ptr)
{
	printf("\n");
	if(ptr==0)
	{
		printf("\n\033[1;31mNo records Found\033[0m\n");
		return;
	}
	printf("\n  RollNo        name        percentage\n\n");
	while(ptr)
	{
		printf(" %3u  %19s  %10.2f \n",ptr->rollno,ptr->name,ptr->per);
		ptr=ptr->next;
	}
}


