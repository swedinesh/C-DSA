#include<stdio.h> 
 
 void setvalue(float n) {
    n = n + (0.18*n);
    printf("Value : %f",n);
 }

 int main() {
    float n = 100.0;
    setvalue(n);
       return 0;
 }