/* Swapping using Third Variable */
#include<stdio.h>

int swap(int a, int b){
    int temp;
    printf("\n Before Swapping");
    printf("\n first value :%d,\n second value :%d",a,b);

    //logic
    temp = a;
    a = b;
    b = temp;

    printf("\n After Swapping");
    printf("\n first value :%d,\n second value :%d",a,b);
}
int main() {
    int a,b,temp,fin;
    printf("Enter two values :");
    scanf("%d%d",&a,&b);
   
   fin = swap(a,b);
    return 0;

}