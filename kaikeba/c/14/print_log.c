/*************************************************************************
	> File Name: print_log.c
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Jan 2022 01:09:37 PM CST
 ************************************************************************/

#include<stdio.h>

#define LOG(func) ({\
    printf("[ file: %s line : %d, func = %s]\n", __FILE__,  __LINE__, #func);\
})

#define DEBUG

#ifdef DEBUG
#define log1(frm, args...) {\
    printf("[%s : %s :%d]", __FILE__, __func__, __LINE__);\
    printf(frm, ##args);\
    printf("\n");\
}
#else
#define log(frm, args...)
#endif


#define CONNECT(a, b) a##b
#define STR(a) #a
int print(){
    printf("test func\n");
    return 1;
}
int main(){

    int a = 123, b = 456, ab = 654321;
    printf("%d\n", CONNECT(a, b));
    printf("%s\n", STR(ab));
    log1("hello world\n");
    log1("%d\n", a);
    return 0;
}
