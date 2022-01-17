/*************************************************************************
	> File Name: 195报数游戏.c
	> Author: 
	> Mail: 
	> Created Time: Wed 12 Jan 2022 12:34:12 AM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 100000


int arr[MAX_N + 5] = {0};
int num[MAX_N + 5] = {0};

int binary_search(int *arr, int n, int x){


    int head = 0, tail = n - 1, mid;
    while(head < tail){
        mid = (head + tail + 1) >> 1;
        if((arr[mid] >= x)) tail = mid - 1;
        else head = mid;

    }

    if( head == -1 ) return arr[0];
    if( head == n ) return arr[n - 1];
    return arr[head];
}
int main(){
    
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    
    int i;
    for( i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for( i = 0; i < m; i++ ){
        scanf("%d", &num[i]);
    }
    
    for( i = 0; i < m; i++ ){
       int val =  binary_search(arr, n, num[i]);
        i == 0? printf("%d",val):printf(" %d", val);
        //printf("%d\n", val);
    }

    printf("\n");
    return 0;
}
