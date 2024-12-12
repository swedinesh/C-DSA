// KRISHNA MURTY FUNCTION e.g. 145 
#include<stdio.h>

void krish(int n);
int main() {
    int i,n,fact,rem,original,sum=0;

    printf("Enter a number :");
    scanf("%d",&n);
    krish(n);

return 0;
}

void krish(int n){
    int i,fact,rem,original,sum=0;
          original=n;
    for( ; n != 0; ){
        rem = n % 10;
         fact = 1;
        for( i=1; i<=rem; i++){
            fact*=i;
        }
        sum += fact;
        n /= 10;
    }

if(sum == original){
    printf("%d number is Krishna Murty Good..!\n",original);
}
else{
    printf("%d number is not Krishna Murty Ohh no...!\n",original);   
}

return;

}