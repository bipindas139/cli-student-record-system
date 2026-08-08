exe: add.o del.o main.o show_the_list.o mod.o read_write_file.o exit.o sort_.o delete_all.o reverse.o
	cc add.o del.o main.o show_the_list.o mod.o read_write_file.o exit.o sort_.o delete_all.o reverse.o -o exe
	
add.o : add.c
	cc -c add.c
del.o : del.c
	cc -c del.c
main.o : main.c
	cc -c main.c
show_the_list.o : show_the_list.c
	cc -c show_the_list.c
mod.o : mod.c
	cc -c mod.c
read_write_file.o : read_write_file.c
	cc -c read_write_file.c
exit.o : exit.c
	cc -c exit.c
sort_.o : sort_.c
	cc -c sort_.c
delete_all.o : delete_all.c
	cc -c delete_all.c	
reverse.o : reverse.c
	cc -c reverse.c
	
clear :
	@echo "clearing..."
	@rm -r *.o 
	

