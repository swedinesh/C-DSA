#include <stdio.h>
//#include <math.h>

int power(int n, int p);
void printTable(int n);

int main() {
    int n, p,result;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("Enter a Power: ");
    scanf("%d", &p);
    printTable(n);
    printf("\n");  // For better readability
   result = power(n, p);
   printf("Results = %d",result);
    return 0;
}

void printTable(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }
    printf("\n");  // Move to the next line after the table
}

int power(int n, int p) {
    int result = 1;
    for( int i=1; i<=p; i++){
        result*=n;
    }
    return result;
}
