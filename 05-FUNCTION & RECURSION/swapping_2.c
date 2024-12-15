// swapping with out using third variable 

#include<stdio.h>

int swap(int a, int b){
 
 printf("Before Swapping...!\n");
 printf("first no. = %d\n second no. = %d\n",a,b);
 printf("\n");

 a = a + b;
 b = a - b;
 a = a - b;

 printf("After Swapping...!\n");
 printf("first no. = %d\n second no. = %d",a,b);

return a,b;

}

int main() {
    int a,b,run;
    printf("Enter a & b :");
    scanf("%d%d",&a,&b);

    run = swap(a, b);
    return 0;
}