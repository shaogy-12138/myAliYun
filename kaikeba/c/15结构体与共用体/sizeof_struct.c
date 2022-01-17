/*************************************************************************
	> File Name: sizeof_struct.c
	> Author: Jason.shao
	> Mail: 
	> Created Time: Sun 16 Jan 2022 10:51:13 PM CST
 ************************************************************************/

#include<stdio.h>

#define LOG(func) {\
    printf("%s = %lu \n", #func, func);\
}

struct A{
    char a;
    int  b;
    char c;
};

struct B{
    char a;
    char b;
    int  c;
};

int main(){
    struct A test_a;
    struct B test_b;
    LOG(sizeof(test_a));
    LOG(sizeof(test_b));
    return 0;
}
