/* Percentage of 5 subject */
#include<stdio.h>

int main() {
    int p,c,m,h,e,total;
    float pr;
    printf("Enter your marks in 5 subject : ");
    scanf("%d%d%d%d%d",&p,&c,&m,&h,&e);

    total = p+c+m+h+e;
    pr = total/5;
    printf("total marks :%d\n",total);
    printf("percentage :%f",pr);

    return 0;  
}