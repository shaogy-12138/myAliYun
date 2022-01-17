/*************************************************************************
	> File Name: EP45.c
	> Author: 
	> Mail: 
	> Created Time: Fri 31 Dec 2021 12:07:20 AM CST
 ************************************************************************/

#include<stdio.h>



typedef long long  int1;


int1 Triangle(int1 n){
    return n * ( n + 1 ) >> 1;
}

int1 Pentagonal(int1 n){
    return  n * ( 3 * n - 1 ) >> 1;
}

int1 Hexagonal(int1 n){
    return n * ( 2 * n - 1);
}

// 二分查找
int1 binary_search(int1 (*arr)(int1), int n, int1 x){

    int head = 0, tail = n - 1, mid;
    while(head <= tail){
        mid = (head + tail) >> 1;
        if(arr(mid) == x)return 1;
        if(arr(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }


    return 0;
}
int main(){
    int n = 143;
    while(1){

        n++;
        int1 temp = Hexagonal(n);
        if(!binary_search(Pentagonal, temp, temp)) continue;
        printf("%lld \n", temp);
        break;
    }




    return 0;
}
