/*************************************************************************
	> File Name: 14.c
	> Author: 
	> Mail: 
	> Created Time: Thu 13 Jan 2022 11:51:24 PM CST
 ************************************************************************/

#include<stdio.h>


int arr[100] = {0}; // 函数外部声明的数组 全局区


void func(int *num, int n){
    printf("sizeof(num) = %lu\n", sizeof(num));
    printf("func : \n");
    return ;
}
int main(){
    
    int arr1[100] = {0};
    printf("%lu\n", sizeof(arr1));

    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }

    func(arr1, n);
    return 0;
}
