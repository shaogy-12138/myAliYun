/*************************************************************************
	> File Name: 17.define.c
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Jan 2022 10:30:16 PM CST
 ************************************************************************/

#include<stdio.h>


#define TYPE(a) _Generic((a),\
                         int : "%d",\
                         double : "%.2lf",\
                         char * :"%s"\
)
__attribute__((constructor))
void func(){
    int a = 2, b = 3;

    printf("func : %d + %d = %d\n", a, b, a+b);
    return ;
}

int main(){

    //泛型宏
    int a = 123;
    double b = 123;
    char str[] = "hello world";
    printf(TYPE(a), a);
    printf(TYPE(b), b);
    printf(TYPE(c), c);
    return 0;
}
