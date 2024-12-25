/*
print address
*/

#include<stdio.h>

int main(void){

char ch;
int i;
float f;

printf("address\nch address : %p\ni address : %p\nf address :  %p\n",&ch,&i,&f);
printf("decimal address\nch address : %d\ni address : %d\nf address :  %d\n",&ch,&i,&f);
printf("octal address\nch address : %o\ni address : %o\nf address :  %o\n",&ch,&i,&f);
printf("hexadecimal address\nch address : %x\ni address : %x\nf address :  %x\n",&ch,&i,&f);

}
