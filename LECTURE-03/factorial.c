#include<stdio.h>

int main() {
    //initiliazation
    int n,fact=1;
    printf("Enter a number :");
    scanf("%d",&n);
    //logic

    for(int i=1; i<=n; i++){
        fact*=i;
        printf("\nFactorial :%d",fact);
    }
    printf("\nFactorial :%d",fact);

    return 0;

}