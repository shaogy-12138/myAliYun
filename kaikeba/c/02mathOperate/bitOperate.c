/*************************************************************************
	> File Name: bitOperate.c
	> Author: 
	> Mail: 
	> Created Time: Tue 28 Dec 2021 04:31:02 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>


unsigned char *intToBinary(int);
int main(){

    // 1. & and | and ~
    int a = 5;
    int b = 8;
    intToBinary(a);
    return;
}


unsigned char *intToBinary(int num){

    unsigned char str[32];
    int length = sizeof(num) * 8;
    while( length-- ){
        //str[length] = (num >> length) & 0x1;
        printf("%x\t", (num >> length) & 0x1);
    }
    return str;
}
