#include"header.h"

/*********************************************
Read from file
Input: Head pointer
Output: Create single linked list as per the data present on file
**********************************************/

void readFile(SLL **ptr)
{
	FILE *fp;
	SLL *last=*ptr,*new;

	fp=fopen("student.dat","r");
	if(fp==0)
	{
		printf("\n Database not found \n");
		return;
	}

	while(1)
	{
		new=malloc(sizeof(SLL));
		if (new == 0)
		{
			perror("malloc");
			fclose(fp);
			return;
		}
	
		
		if((fscanf(fp," %19[a-zA-Z ]%f",new->name,&new->per))!=2)
		{ 	
			free(new); 
			break;
		}
		new->next=0;
		new->rollno=++rollno;
		if(*ptr==0)
		{
			*ptr=new;
			printf("\n %u %s %f \n",new->rollno,new->name,new->per);
		}
		else
		{
			last=*ptr;	
			while(last->next)
				last=last->next;
			last->next=new;
			last=new;
			printf(" %u %s %f \n",new->rollno,new->name,new->per);
		}
	}
	fclose(fp);
	printf("\n File read completed\n");
} 

/*********************************************
Write to file
Input: Head pointer
Output: Write single linked list datas to a file
**********************************************/

void writeFile(SLL *ptr)
{
	if(ptr==0)
	{
		printf("\n\033[1;31mNo records Found\033[0m\n");
		return;
	}

	FILE *fp;
	fp=fopen("student.dat","w");
	if(fp==0)
	{
		perror("fopen");
		return;
	}
	while(ptr)
	{
		fprintf(fp,"%19s  %f \n",ptr->name,ptr->per);

		ptr=ptr->next;
	}
	fclose(fp);
	printf("\n Records saved successfully \n");
}  


 
