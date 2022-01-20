/*************************************************************************
	> File Name: 21.pointer.c
	> Author: Jason.shao
	> Mail: 
	> Created Time: Mon 17 Jan 2022 11:23:41 PM CST
 ************************************************************************/

#include<stdio.h>
#define offset1(T, a) ({\
    T temp;\
    (char *)&temp.a - (char*)&temp;\
})

#define offset(T, a) (long)(&((T *)(NULL))->a)

struct Data{

    int a;
    char b;
    double c;
};



typedef char *pchar;
#define Pchar char *
int main(){

    printf("%ld \n", offset(struct Data, a));
    printf("%ld \n", offset(struct Data, b));
    printf("%ld \n", offset(struct Data, c));

    pchar p1, p2;
    Pchar p3, p4;
    printf("%lu %lu \n",sizeof(p1), sizeof(p2));
    printf("%lu %lu \n",sizeof(p3), sizeof(p4));
    return 0;
}
