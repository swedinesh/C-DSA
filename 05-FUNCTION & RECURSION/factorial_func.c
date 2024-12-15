// Factorial

#include<stdio.h>

int isfact(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int main() {
    int n,fact;
    printf("Enter a number :");
    scanf("%d",&n);
    fact = isfact(n);
    printf("factorial is :%d",fact);
    return 0;
}