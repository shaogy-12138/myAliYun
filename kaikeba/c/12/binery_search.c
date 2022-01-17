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

// 00000001111111
int binery_search_first(int *arr, int n, int x){
    int head = 0, tail = n, mid;
    while(head < tail){
        mid = (head + tail) >> 1;
        if(arr[mid] == 0) head = mid + 1;
        else tail = mid;
    }

    if( head == n ) return -1;
    return head;
}


// 11111110000000
int binery_search_last(int *arr, int n, int x){
    int head = -1, tail = n - 1, mid;

    while(head < tail){
        mid = (head + tail + 1) >> 1;
        if(arr[mid] == 0) tail = mid - 1;
        else head = mid;

        printf("head = %d, mid = %d, tail = %d\n", head, mid, tail);
    }

    return (tail == -1)?(-1):tail;
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
        printf("%d\n", binery_search_last(arr, n, num));
    }

    return 0;
}
