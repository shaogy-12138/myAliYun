/*************************************************************************
	> File Name: 20.test.c
	> Author: Jason.shao
	> Mail: 
	> Created Time: Mon 17 Jan 2022 11:03:27 PM CST
 ************************************************************************/

#include<stdio.h>

#define P(func) {\
    printf("%s = %d\n", #func, func);\
}

struct Data{
    int x, y;
};

int main(){

    struct Data a[2], *p = a;
    a[0].x = 0, a[0].y = 1;
    a[1].x = 2, a[1].y = 3;
    P(a[1].x);
    P(p[1].x);
    P((a+1)->x);
    P((*(a+1)).x);
    P((p+1)->x);
    P((&a[0]+1)->x);
    P((&p[0]+1)->x);


    return 0;
}
