/* Swapping using Third Variable */
#include<stdio.h>

int main() {
    int a,b,temp;
    printf("Enter two values :");
    scanf("%d%d",&a,&b);
    printf("\n Before Swapping");
    printf("\n first value :%d,\n second value :%d",a,b);
    //logic
    temp = a;
    a = b;
    b = temp;

    printf("\n After Swapping");
    printf("\n first value :%d,\n second value :%d",a,b);

    return 0;

}