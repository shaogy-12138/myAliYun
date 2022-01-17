/*************************************************************************
	> File Name: min_factor.c
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Jan 2022 11:05:40 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N  100


int prime[MAX_N + 5] = {0};


int init(){
    int i;
    for( i = 2; i <= MAX_N; i++ ){
        if(prime[i]) continue;
        // prime[++prime[0]] = i;
        int j;
        for( j = i; j <= MAX_N; j += i ){
           // prime[j * i] = 1;
            if(prime[j]) continue;
            prime[j] = i;   // 存放的是首次出现的素数
        }
    }

    return ;
}


void test(){
    init();
    int i;
    for( i = 2; i <= MAX_N; i++ ){
        printf("min_factor[%d] = %d\n", i, prime[i]);
    }

}







int main(){


    test();
    return 0;
}
