 #include<stdio.h>

int main() {
    int n,fact=1;
    
    printf("Enter a value :");
    scanf("%d",&n);

    if(n%2==0) {
        for( int i=2; i<=n; i+=2 )
        {
             fact*=i;
        }
        printf("Factorial :%d",fact);
    }
    else {

        for( int i=1; i<=n; i+=2 )
        {
             fact*=i;
        }
        printf("Factorial :%d",fact);
    }
    return 0;
}


/* #include <stdio.h>

int main() {
    int n, fact = 1;

    printf("Enter a value: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        for (int i = 2; i <= n; i += 2) {
            fact *= i;
        }
        printf("Factorial of even numbers up to %d: %d\n", n, fact);
    } else {
        for (int i = 1; i <= n; i += 2) {
            fact *= i;
        }
        printf("Factorial of odd numbers up to %d: %d\n", n, fact);
    }
    
    return 0;
}
*/