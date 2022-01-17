/*************************************************************************
	> File Name: gcd.c
	> Author: 
	> Mail: 
	> Created Time: Sun 02 Jan 2022 12:40:11 AM CST
 ************************************************************************/

#include<stdio.h>



int gcd(int a, int b){

    return (b?gcd(b, a%b):a);
    if(!b) return a;
    return gcd(b, a%b); 
}

int lcm(int a, int b){
    return a / gcd(a, b) * b;
}


int ex_gcd(int a, int b, int *x, int *y){

    if(!b){
        *x = 1, *y = 0;
        return a;
    }

    int  ret = ex_gcd(b, a%b, y, x);
    *y -= a / b * (*x);
    return ret;
}
int main(){

    int a, b;
    int x, y;
    while(~scanf("%d%d", &a, &b)){
        printf("%d\n", gcd(a, b));
        printf("%d\n", lcm(a, b));
        printf("gcd(%d, %d) = %d\n", a, b, ex_gcd(a, b, &x, &y));
        printf("%d * %d + %d * %d = %d\n", a, x, b, y, a * x + b * y);
    }
    return 0;
}
