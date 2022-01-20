/*************************************************************************
	> File Name: 22.main.c
	> Author: Jason.shao
	> Mail: 
	> Created Time: Mon 17 Jan 2022 11:37:59 PM CST
 ************************************************************************/

#include<stdio.h>



void outpt(int argc, char *argv[], char **env){

    printf("%d", argc);
    int i;
    for(i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    for( i = 0; env[i]; i++){
        printf("env[%d] = %s \n", i, env[i]);
    }
}
int main(int argc, char *argv[], char **env){

    outpt(argc, argv, env);
    return 123;
}
