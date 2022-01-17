/*************************************************************************
	> File Name: bs.c
	> Author: 
	> Mail: 
	> Created Time: Fri 31 Dec 2021 12:42:19 AM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 10


//二分查找最简单的实现
//
int binary_search(int *arr, int n, int x){


    int head = 0, tail = n - 1;
    int mid;
    while(head <= tail){
        mid = (head + tail) >> 1;
        if( arr[mid] == x ) return mid;
        if( arr[mid] < x ) head = mid + 1;
        else tail = mid - 1;
    }

    return -1;
}

int binary_search_01(int *arr, int head, int tail, int x){
    
    if (head > tail) return -1;
    int mid = (head + tail) >> 1; // waring: if >> bit ,this bit is error, maybe cause segmentation (core dunped)
    if( arr[mid] == x ) return mid;
    if( arr[mid] < x ) return binary_search_01(arr, mid+1, tail, x);
    else return binary_search_01(arr, head, mid-1, x);
}
int main(){

    int arr[MAX_N + 5] = {0},n;
    
    int num;
    int i;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    while(~scanf("%d", &num)){
        int ret = binary_search_01(arr, 0, n-1, num);
//        printf("test = %d\n", ret);
        if( ret == -1){

            printf("not found!!!\n");
        } 
        else{
            
            printf("toal  = %d\n", ret);
        }
    }
    return 0;
}
