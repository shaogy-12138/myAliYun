/*************************************************************************
	> File Name: gg.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jan 2022 06:45:58 PM CST
 ************************************************************************/

#include<stdio.h>


int gcd(int a, int b){

    // 辗转相除法
    if(!b) return a;
    return gcd(b, a % b);
}


int test01(int num){
    
    int a, b, c, cnt = 0;
    int n, m;
    for(n = 1; n < 1000; n++){
        for(m = n; (m * m + n * n <= num)&&(m < 1000); m++){
            if(gcd(m,n) != 1) continue;
            c = m * m + n * n;
            a = m * m - n * n;
            b = 2 * m * n;
            if(gcd(a,b) != 1) continue;
            if(num % c != 0) continue;
            cnt++;
            //a = m^2 - n^2;
           // b = 2 * m * n;
        
        }
    }
    return cnt;

}
int main(){


    int a, b, c;
    int cnt = 0;
    scanf("%d", &c);
    
    for( a = 1; a < 0; a++ ){

        for( b = a; b < c; b++ ){
            if(a*a + b*b == c*c)
                cnt++;
        }
    }
    
    cnt = test01(c);
    printf("%d\n", cnt);

    return 0;
}
