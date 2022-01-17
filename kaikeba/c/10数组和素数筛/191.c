/*************************************************************************
	> File Name: 191.c
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Jan 2022 11:24:17 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 8000000

int prime[MAX_N + 5] = {0};

void init(){

    int i, j;
    for(i = 2; i <= MAX_N; i ++){
        if(prime[i]) continue;
        prime[++prime[0]] = i;

        for( j = i; j <= MAX_N / i; j++ ){
            prime[j * i] = 1;
        }
    }

}

void solve(int a, int b){
    int i;
    int min = b, max = 0;
    int min_a, min_b;
    int max_a, max_b;
    for(i = 1; i <= prime[0] && prime[i + 1] <= b; i++){
        if(prime[i] < a) continue;
        int temp = prime[i + 1] - prime[i];
        if(temp < min){
            min = temp;
            min_a = prime[i], min_b = prime[i + 1];
        }
        if(temp > max){
            max = temp;
            max_a = prime[a], max_b = prime[b];
        }
    }

    if( max == 0 ){
        printf("no no no \n");
    }
    else{
        printf("%d %d %d %d",min, max, min_a, min_b);
    }
}

void test(){

    init();
    int i;
    int a, b;
    while(~scanf("%d%d", &a, &b)){
        solve(a, b);
    }

}

int main(){
    

    test();
    #undef MAX_N
    return 0;
}
