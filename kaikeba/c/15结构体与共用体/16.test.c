/*************************************************************************
	> File Name: 16.test.c
	> Author: Jason.shao
	> Mail: 
	> Created Time: Sun 16 Jan 2022 11:39:55 PM CST
 ************************************************************************/

#include<stdio.h>



union node{
    int a;
    char   b[20];
    double    c;
};

int main(){
    
    union node n;
    printf("sizeof(n) = %lu\n", sizeof(n));

    return 0;
}
