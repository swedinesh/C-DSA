

#include<stdio.h>

int main() {
  int row;
  printf("Enter number of rows :");
  scanf("%d",&row);

//upper pyramid
  for( int i=1; i<=row; i++){
    for( int j=1; j<=i-1; j++){
      printf(" ");
    }
    for( int st=1; st<=2*(row-i)+2; st++){
      printf("*");
    }
    printf("\n");
  }

  //lower pyramid

    for( int i=row; i>=1; i--){
      for( int j=1; j<=i-1; j++){
        printf(" ");
    }
       for( int st=1; st<=2*(row-i)+2; st++){
       printf("*");
    }
    printf("\n");
  }
   return 0;

}
