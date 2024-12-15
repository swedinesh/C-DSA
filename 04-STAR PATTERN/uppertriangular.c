/*

*****
 ****
  ***
   **
    *
    
*/

#include<stdio.h>

int main() {
  int row;
  printf("Enter number of rows :");
  scanf("%d",&row);

  for( int i=1; i<=row; i++){
    for( int j=1; j<=i-1; j++){
      printf(" ");
    }
    for( int st=1; st<=row-i+1; st++){
      printf("*");
    }
    printf("\n");
  }
   
   return 0;

}
