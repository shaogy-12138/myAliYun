/*************************************************************************
	> File Name: is_prime.c
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Jan 2022 08:38:02 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 100

int prime[MAX_N + 5] = {0};//开大点可以避免溢出

int is_prime(int n){


    return 1;
}


void init(){
    int i = 2;
    for(; i <= MAX_N; i++){
        if(prime[i]) continue;
        prime[++prime[0]] = i; //1 利用index = 0 的位置记录素数个数 ，素数对应的位置存储数值本身
        //int j = i * i; // 跳过重复标记的过程 但是可能造成溢出
        int j = i;
        for( ; j <= MAX_N / i; j ++ ){
            prime[j * i] = 1;
        }
        
    }
}

void test(){

    init();
    int i;
    for(i = 2; i <= prime[0]; i++ ){  // i表示输出素数的个数，1~prime[0]
       // if(prime[i]) continue;
        printf("%d\n", prime[i]); 
    }

}

int is_prime_0(int n){
    
    //
    // 时间复杂度O（n）
    //
    if ( n <= 1 ) return 0;
    int i = 2;
    for(; i * i  <= n; i++){
        if(n % i == 0 ) return 0;
    }

    return 1;
}

int main(){

    int n;
   // while(~scanf("%d", &n)){
    //int  i;
    //scanf("%d", &n);
    //for (i = 2; i < n; i++){
    //    is_prime_0(i) && printf("%d\n", i);
    //}
    //
    test();
    return 0;
}
