/*
to avoid compliments
*/

#include<stdio.h>

int main(void){
char ch=97;		// default signed
unsigned char ch2=97;

	printf("ch = %d\n",ch);
	
	ch = ch+3;
	printf("ch = %d\n",ch);
	
	ch = ch*2;
	printf("ch = %d\n",ch);
	
	printf("-------------------\n");	

	printf("ch2 = %d\n",ch2);
	
	ch2 = ch2+3;
	printf("ch2 = %d\n",ch2);
	
	ch2 = ch2*2;
	printf("ch2 = %d\n",ch2);
}
