#include<stdio.h>
#include<math.h>

void exponent(int n, int p){
printf("%f",pow(n, p));
}

int main(){
    int n,p;
    printf("Enter a vlaue of base :");
    scanf("%d",&n);
    printf("Enter a vlaue of exponent :");
    scanf("%d",&p);
    exponent(n, p);

return 0;
}