/*************************************************************************
	> File Name: max_int.c
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Jan 2022 05:24:18 PM CST
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#include<stdarg.h>


#define P(func) {\
    printf("%s = %d\n", #func, func);\
}



int max_int(int a, ...){
    int ans = INT32_MIN;
    va_list arg;
    va_start(arg, a);
   

    printf("a = %d\n", a);

    while(a--){
        int temp = va_arg(arg, int);
        printf("a = %d, temp = %d\n",a, temp);
        if(temp > ans) ans = temp;
    }

    va_end(arg);
    return ans;
}

int main(){

    P(max_int(3, 1, 5, 3));
    P(max_int(5, 1, 2, 5, 3, 8));

    return 0;
}
