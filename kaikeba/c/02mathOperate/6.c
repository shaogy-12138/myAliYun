/*************************************************************************
	> File Name: 6.c
	> Author: 
	> Mail: 
	> Created Time: Wed 29 Dec 2021 01:03:34 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

#define swap(a, b){\
    __typeof(a) __temp = a;\
    a = b; b = __temp;\
}

void swap01(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    //swap01(&a, &b);
    //swap(a, b);
    a = a^b; // eg: 3 ^ 2 = 1 ==> a = 1
    b = a^b; // eg: 1 ^ 2 = 3 ==> b = 3
    a = a^b; // eh: 1 ^ 3 = 2 ==> a = 2
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
