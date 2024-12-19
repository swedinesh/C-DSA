#include<stdio.h>

int main() {
    int a[10], i, sum = 0;
    float avg;
    
    printf("Enter 10 numbers :");
    
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < 10; i++) {
        sum += a[i];
    }
    
    avg = sum / 10.0;
    printf("Average of 10 Numbers is: %f\n", avg);

    return 0;
}
