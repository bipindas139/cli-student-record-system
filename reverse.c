#include"header.h"

/********************************************
Reverse single linked list
Input: Head pointer
Output: Reversed list
********************************************/

void reverse(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("\n\033[1;31mNo records Found\033[0m\n");
		return ;
	}
	if((*ptr)->next==0)
	{
		printf("\n\033[1;32mOnly one record found\033[0m\n");
		return ;
	}

	SLL *last =0 , *prev = *ptr, *cur = *ptr;

	while(1)
	{
		cur = prev;
		prev = cur->next;
		cur->next = last;
		if(prev == 0)
			break;
		last = cur;
	}

	*ptr = cur;
printf("\nSuccesfully Reversed\n");
}

