#include<stdio.h>

void bonjour(){
    printf("Bonjour\n");
}

void namaste(){
    printf("Namaste\n");
}

int main() {
char ch;
printf("Enter i for INDIAN & f for FRENCH :");
scanf("%c",&ch);

if( ch == 'i' ){
    namaste();
}
else {
    bonjour();
}

return 0;

}

//OR

/*
#include <stdio.h>

void bonjour() {
    printf("Bonjour\n");
}

void namaste() {
    printf("Namaste\n");
}

int main() {
    char ch;
    printf("Enter i for INDIAN & f for FRENCH: ");
    scanf("%c", &ch);  

    if (ch == 'i') {
        namaste();
    } else if (ch == 'f') {
        bonjour();
    } else {
        printf("Invalid input. Please enter 'i' or 'f'.\n");
    }

    return 0;
}

*/
