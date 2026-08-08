#ifndef HEADER_H
#define HEADER_H


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef unsigned int  u32;
typedef  int   s32;
typedef unsigned char u8;
typedef  char  s8;
typedef  float f32;

extern u32 rollno;

typedef struct student
{
u32 rollno;
s8 name[20];
f32 per;
struct student *next;
}SLL;


void stu_add(SLL **);
//void stu_print(SLL *);
u32 stu_del(SLL **);
void stu_show(SLL *);
void stu_mod(SLL **);
void exit_(SLL **);
void sort(SLL **);
void delete_all(SLL **);
void delete0(SLL *);
void reverse(SLL **);

u8 rollno_mod(SLL *,u32 );
u8 rollno_del(SLL **,u32 );



void readFile(SLL **);
void writeFile(SLL *);
//void writeFile_End(SLL *);

#endif
