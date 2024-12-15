#include<stdio.h>

int main() {
   int n;
   printf("Enter a Number : ");
   scanf("%d",&n);
   int f = 1;
   int i=1;
   while(i<=n) {
    f*=i;
    i++;
   }
printf("factorial : %d",f);

    return 0;
}