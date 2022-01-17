/*************************************************************************
	> File Name: 10.c
	> Author: 
	> Mail: 
	> Created Time: Thu 30 Dec 2021 12:20:04 AM CST
 ************************************************************************/

#include<stdio.h>



long int test(int n){
    if((n == 0)  || (n == 1)){
        return 1;
    }

    return n * test(n-1);
}
int main(){
    
    int n;
    long int nn = 0;
    scanf("%d", &n);
    nn = test(n);
    printf("nn = %ld\n", nn);
    return 0;
}
