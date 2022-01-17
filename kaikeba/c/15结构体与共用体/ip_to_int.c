/*************************************************************************
	> File Name: ip_to_int.c
	> Author: Jason.shao
	> Mail: 
	> Created Time: Sun 16 Jan 2022 11:47:54 PM CST
 ************************************************************************/

#include<stdio.h>



union IP {
    struct{
        unsigned char a1;
        unsigned char a2;
        unsigned char a3;
        unsigned char a4;
    }ip;
    unsigned int num;
};
int main(){
    
    union IP p;
    char str[100] = {0};
    int arr[4] = {0};
    while(~scanf("%s",str)){
        sscanf(str,"%d.%d.%d.%d", arr, arr + 1, arr + 2, arr + 3);
        p.ip.a1 = arr[0];
        p.ip.a2 = arr[1];
        p.ip.a3 = arr[2];
        p.ip.a4 = arr[3];
        printf("%lu\n", p.num);
    }
    return 0;
}
