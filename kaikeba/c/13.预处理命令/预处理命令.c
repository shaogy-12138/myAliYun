/*************************************************************************
	> File Name: 预处理命令.c
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Jan 2022 12:42:21 AM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_1(a, b) ((a) > (b)? (a) : (b))
#define MAX(a, b) ({\
    __typeof(a) _a = (a);\
    __typeof(b) _b = (b);\
    _a > _b ? _a : _b;\
})
#define P(func) {\
    printf("%s = %d\n", #func, func);\
}
int main(){
    int a = 7;
    P(MAX(2, 3));
    P(5 + MAX(2, 3));
    P(MAX(2, MAX(3, 4)));
    P(MAX(2, 3 > 4? 3 : 4));
    P(MAX(a++, 6));
    P(a);
    
    /*P("%d\n", MAX(2, 3));
    P("%d\n", 5 + MAX(2, 3));
    P("%d\n", MAX(2, MAX(3, 4)));
    P("%d\n", MAX(2, 3 > 4? 3 : 4));
    P("%d, %d\n", MAX(a++, 6));
    P("%d\n", a)*/
    return 0;
}
