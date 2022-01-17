/*************************************************************************
	> File Name: my_sqrt.c
	> Author: 
	> Mail: 
	> Created Time: Wed 12 Jan 2022 01:19:20 PM CST
 ************************************************************************/

#include<stdio.h>

double my_sqrt(double n){
    double head = 0, tail  = (n < 1)? 1 : n, mid;
    #define EPSL 1e-8    //0.000001
    while(tail - head > EPSL){
        mid = (head + tail) / 2.0;
        printf("%g\t %g\t %g\n", head, mid, tail);
        if(mid * mid < n) head = mid;
        else tail = mid;
    }
    #undef EPSL
    return head;
}


int main(){

    double n ;
    while(~scanf("%lf", &n)){
        printf("my_sqrt(%g) = %g\n", n, my_sqrt(n));
        printf("sqrt   (%g) = %g\n", n, sqrt(n));
        //printf("my_sqrt(%lf) = %lf\n", n, my_sqrt(n));
        //printf("sqrt   (%lf) = %lf\n", n, sqrt(n));
    }

    return 0;
}
