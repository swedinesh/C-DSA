#include<stdio.h>

int sum(int a, int b);

int main(){
    int a,b;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);

    int s = sum(a,b);
    
   printf("sum : %d \n",s);

    return 0;
}

int sum(int x, int y){
    return x+y;
}
/*
#include<stdio.h>

void sum(){
    int a,b,sum;
    printf("Enter value of a & b :");
    scanf("%d%d",&a,&b);
    printf("sum :%d",a+b);
    return;
}

int main() {
    sum();
    return 0;
}
*/