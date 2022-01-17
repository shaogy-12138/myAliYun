/*************************************************************************
	> File Name: select_sort.c
	> Author: Jason.shao
	> Mail: 
	> Created Time: Mon 17 Jan 2022 09:47:25 AM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N  5
#define SWAP(a, b) {\
    __typeof(a) _temp = a;\
    a = b;\
    b = _temp;\
}

int arr[MAX_N + 5] = {0};


void display_arr(int *arr, int n){
    int i;
    for(i = 0; i < n; i ++){
        i && printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
}

int partation(int *num, int l, int r){
    if (l > r) return ;
    int left = l, right = r, p = num[1];
    while(left < right){
        while((num[right] < p) && (left < right)) right--;
        while((num[left] > p)&&(left < right)) left++;
        if( left < right ) SWAP(num[left], num[right]);
    }
    return left;
}

int select_sort(int *num, int l, int r){
    if( l < r ){
        int index = partation(num, l, r);
        select_sort(num, l, index - 1);
        select_sort(num, index + 1, r);
    }
}
void test_01(){
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    display_arr(arr, n);
    select_sort(arr, 0, n - 1);
    display_arr(arr, n);
}

int main(){
    test_01();
    return 0;
}
