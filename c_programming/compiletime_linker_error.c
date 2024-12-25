/*
this is show compile time linker error
*/

#include<stdio.h>

#define 1 ONE

int main(void)
{
	printf("Hello\n");
	strlen("Hello");
}
