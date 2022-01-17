/*************************************************************************
	> File Name: binery_search.c
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Jan 2022 01:13:32 PM CST
 ************************************************************************/

#include<stdio.h>


int binery_search(int *arr, int n, int x){

    int head = 0, tail = n -1;
    while(head <= tail){
        int  mid = (head + tail) >> 1;
        if( arr[mid] == x ) return mid;
        if( arr[mid] < x ) head = mid + 1;
        else tail = mid - 1;
    }

    return -1;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[100] = {0}, num;
    int i = 0;
    for( ; i < n; i++ ){
        scanf("%d", &arr[i]);
    }

    while(~scanf("%d", &num)){
        printf("%d\n", binery_search(arr, n, num));
    }

    return 0;
}
