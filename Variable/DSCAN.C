#include<stdio.h>
#include<conio.h>


void main(){
	int a;
	clrscr();

	printf("Enter a number: ");
	scanf("%d" , &a);
	printf("value of a is: %d" , a);

	getch();
}




/*

stdio.h  :   scanf();

Use of Scanf : it is used to scan a value from the user
		or from the console screen

Syntax:


scanf("format_Specifier" , &variable_name);


Example:


int:   scanf("%d" , &int)
float : scanf("%f" , &float)




*/