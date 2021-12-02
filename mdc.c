#include<stdio.h>

int mdc(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    return mdc(b, a % b);
}

int main(void){
    int a, b;
    printf("Quais sao os numeros, bb? "); scanf("%d", &a); scanf("%d", &b);
    printf("%d", mdc(a, b));
    return 0;
}