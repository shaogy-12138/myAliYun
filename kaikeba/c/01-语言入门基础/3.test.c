/*************************************************************************
	> File Name: 3.test.c
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Dec 2021 11:39:13 PM CST
 ************************************************************************/

#include<stdio.h>


int main(){

    
    char str[100] = {0};
    while(scanf("%[^\n]s",str) != EOF){
    
        getchar();
        printf(" has %d char \n", printf("%s",str));
    }
    return 0;
}
