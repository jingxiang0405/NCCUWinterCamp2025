#include <stdio.h>
// 輸入整數a, b 回傳最大公因數
int gcd(int a, int b){ 
    while (b != 0){
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main(){
    int a = 30, b = 18;
    printf("%d\n", gcd(a, b));
    return 0;
}
