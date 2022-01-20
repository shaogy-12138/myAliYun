/*************************************************************************
	> File Name: test.c
	> Author: Jason.shao
	> Mail: 
	> Created Time: Mon Jan 17 13:39:18 2022
 ************************************************************************/

#include<stdio.h>


int main(){

    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("&a = %p, p = %p, &p = %p\n", &a, p, &p);
    printf("&p = %p, pp = %p, *pp = %p\n", &p, pp, *pp);
    return 0;
}
