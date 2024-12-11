/* Swapping Two numbers with out third variable */
#include<stdio.h>

int main() {
   
   int a,b;
    printf("Enter two values :");
    scanf("%d%d",&a,&b);
    printf("\n Before Swapping");
    printf("\n first value :%d,\n second value :%d",a,b);
    //logic

    a = a+b;
    b = a-b;
    a = a-b;

    printf("\n After Swapping");
    printf("\n first value :%d,\n second value :%d",a,b);

    return 0;
}