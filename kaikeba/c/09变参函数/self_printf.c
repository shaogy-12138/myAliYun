/*************************************************************************
	> File Name: self_printf.c
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Jan 2022 05:50:40 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>
#include<inttypes.h>




int  reverse_num(int n, int *temp){
    int digit = 0;
    do{
        *temp = *temp *10 + n % 10;
        digit += 1;
        n /= 10;
    }while(n);
    return digit;
}

int output_num(int n, int digit){
    int cnt = 0;
    while(digit--){
        putchar( n % 10 + '0');
        cnt ++;
        n /= 10;
    }
    return cnt;
}
int my_printf(const char *frm, ...){
    //
    // 返回值：成功打印字符的个数
    //
    
    int cnt = 0;
    int i;
    va_list arg;
    va_start(arg, frm); // 设定可变参数起始 
    #define PUTC(a) putchar(a), ++cnt
    for( i = 0; frm[i]; i++ ){
        switch(frm[i]){
            case '%':{
                switch(frm[++i]){
                    case '%':PUTC(frm[i]);break;
                    case 'd':{
                        int temp = va_arg(arg, int);// 获取一个整形
                        uint32_t xx = 0;
                        if(temp < 0){
                            PUTC('-');
                            xx = -temp;
                        }
                        else
                            xx = temp;
                        int x1 = xx /100000, x2 = xx % 100000;
                        
                        int temp1 = 0, temp2 = 0;

                        int digit1 = reverse_num(x1, &temp1);
                        int digit2 = reverse_num(x2, &temp2);

                        if(x1) digit2 = 5;
                        else digit1 = 0;
                        cnt += output_num(temp1, digit1);
                        cnt += output_num(temp2, digit2);
                        
                        /*
                        int x = 0;
                        int digit = 0;
                        do{ // 反转
                            x = x * 10 + temp % 10;
                            temp /= 10;
                            digit++;
                        }while(temp);
                        while(digit--){
                            PUTC(x % 10 + 48);
                            x /= 10;
                        }*/
                    }break;
                    case 's':{
                        const char* str = va_arg(arg, const char *);
                        int i;
                        for(i = 0; str[i]; i++){
                            putchar(str[i]);
                            cnt ++;
                        }
                    } break;
                }
        }break;
            default: PUTC(frm[i]);
        }
    }
    #undef PUTC
    va_end(arg);
    return cnt;
}

int main(){

    //
    // putchar 打印输出一个字符
    // printf 函数底层的实现是由putchar封装的
    // c++的cout是由printf函数封装的
    //
    
    int a = 0;
    printf("printf: hello world\n");
    my_printf("my_printf: hello world\n");
    
    printf("---------\n");
    printf("printf: int(a) = %d\n",a);
    my_printf("my_printf: int(a) = %d\n", a);
    printf("---------\n");
    printf("printf: int(a) = %d\n",1000);
    my_printf("my_printf: int(a) = %d\n", 1000);
    printf("---------\n");
    printf("printf: int(a) = %d\n",-123);
    my_printf("my_printf: int(a) = %d\n", -123);
    printf("printf: INT32_MIN: = %d\n", INT32_MIN);
    printf("printf: INT32_MAX: = %d\n", INT32_MAX);
    my_printf("my_printf: INT32_MIN: = %d\n", INT32_MIN);
    my_printf("my_printf: INT32_MAX: = %d\n", INT32_MAX);
    char str[] = "hello kaikeba!";
    my_printf("%s\n", str);
    return 0;
}
