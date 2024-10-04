/*
				Name: Dev Patel
				DOC: 4-OCT-2024
				Purpose: Link
*/


//link section

#include<stdio.h>
#include<conio.h>


// main method : entry point

void main(){
	clrscr();
	printf("Hello, Dev");
	printf(" Welcome!");
	getch();
}




/*
Built-in: these are already provided by C.(printf , scanf , clrscr)
User-defiend: these are created by users.


Link Section: in this section we link the header file to our program

Syntax:

	# : preprocessor
	include
	<filename> : <stdio.h> , <conio.h> , <math.h>

	#include<file_name>

	#include<stdio.h>



.h = header file


1. stdio.h  : standard input output

	- it includes function that are used to print or scan the data

	- printf() , scanf()

2. conio.h  : Console input output

	- it includes function that are used to print or scanf the data
	  from the console screen (output screen)

	- clrscr() , getch()





printf() : it is used to print the statement provided in the double quotes
	   on the output screen (console screen).


getch() : it is used to hold the output/console screen.
	  actual use : it is used to take the data from the output screen


clrscr() : it is used to clear the output/console screen.

*/