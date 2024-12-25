/*
This file represent basic structure of c programming language
*/

#include<stdio.h>	//header file include
	
#define PI 3.14		// macro define

int temp;	// global variable

void function_one(void);	// function prototype

int main(){	// main function

int num1,num2;	// local variable
int result;

	result = num1+num2;	// logic

function_one();		// function call
}

void function_one(void) // function defination
{
	printf("Hello\n");
}
