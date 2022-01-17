/*************************************************************************
	> File Name: EP07.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Jan 2022 01:14:28 PM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 100

int prime[MAX_N + 5] = {0};

void init(){
    int i, j;
    for( i = 2; i <= MAX_N; i++ ){
        if(!prime[i])
            prime[++prime[0]] = i;
        for( j = 1; j <= prime[0]; j++ ){
            if(prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }

}

void test(){
    
    init();
    int i;
    for(i = 1; i <= prime[i]; i++){
        printf("%d\n", prime[i]);
    }

}
int main(){
    test();

    return 0;
}
