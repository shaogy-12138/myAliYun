/*************************************************************************
	> File Name: NewTon.c
	> Author: 
	> Mail: 
	> Created Time: Thu 13 Jan 2022 01:18:32 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define ESPL 1e-8

double func( double x, double n ){
    return x * x - n;
}

double f( double x ){
    return 2 * x;
}

double NewTon(double(*F)(double, double), double(*f)(double), double n){
    double x = 1.0;
    while(fabs(F(x, n)) > ESPL){
        x -= F(x, n) / f(x);
    }

    return x;
}
double my_sqrt(double n){
    return NewTon(func, f, n);
}
int main(){

    double n;
    while(~scanf("%lf", &n)){
        printf("sqrt(%g) = %g\n", n, sqrt(n));
        printf("my_sqrt(%g) = %g\n", n, my_sqrt(n));
    }
#undef ESPL
    return 0;
}
