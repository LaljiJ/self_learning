/*
print value in diffrent mode
*/

#include<stdio.h>

int main(void){
    char ch;
    int i;
    float f;

    ch = 'a';
    i = 10;
    f = 12.3;

    printf("char data print\n char:%c decimal:%d octal:%o hexadecimal:%x\n",ch,ch,ch,ch);
    printf("int data print\n char:%c decimal:%d octal:%o hexadecimal:%x\n",i,i,i,i);
    printf("float data print\n char:%c decimal:%d octal:%o hexadecimal:%x\n",f,f,f,f);
}
