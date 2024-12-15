#include<stdio.h>

void swap(int *p, int *q);

int main() {
    int a,b;
    printf("Enter value of A & B :");
    scanf("%d%d",&a,&b);
    printf("Before Swapping..!\n");
    printf("First number is : %d\nSecond number is :%d\n",a,b);
    swap(&a, &b);
}

void swap(int *p, int *q){
         
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;

    printf("After Swapping..!\n");
    printf("First number is : %d\nSecond number is :%d\n",*p,*q);

}