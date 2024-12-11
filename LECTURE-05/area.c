/*
#include<stdio.h>
#include<math.h>

float areaOFsquare(float side);
float areaOFcircle(float radius);
float areaOFrectangle(float h, float w);

int main(){

float side,radius,h,w;
printf("Enter side of Square :");
scanf("%f",&side);
printf("Enter radius of Circle :");
scanf("%f",&radius);
printf("Enter height of rectangle :");
scanf("%f",&h);
printf("Enter width of rectangle :");
scanf("%f",&w);

printf("Area of Square =%f",areaOfsquare(side));

printf("Area of Circle =%f",areaOfcircle(radius));

printf("Area of Rectangle =%f",areaOfrectangle(h, w));

return 0;
}

float areaOFsquare(float side){
    return side*side;
}

float areaOFcircle(float radius){
     return 3.14*(radius*radius);
}

float areaOFrectangle(float h, float w){
       return h*w;
}

*/

#include <stdio.h>
#include <math.h>

// Function prototypes
float areaOfSquare(float side);
float areaOfCircle(float radius);
float areaOfRectangle(float h, float w);

int main() {
    float side, radius, h, w;

    // User input for the side of the square
    printf("Enter side of Square: ");
    scanf("%f", &side);
    
    // User input for the radius of the circle
    printf("Enter radius of Circle: ");
    scanf("%f", &radius);

    // User input for the height of the rectangle
    printf("Enter height of Rectangle: ");
    scanf("%f", &h);

    // User input for the width of the rectangle
    printf("Enter width of Rectangle: ");
    scanf("%f", &w);

    // Display the area of the square
    printf("Area of Square = %f\n", areaOfSquare(side));

    // Display the area of the circle
    printf("Area of Circle = %f\n", areaOfCircle(radius));

    // Display the area of the rectangle
    printf("Area of Rectangle = %f\n", areaOfRectangle(h, w));

    return 0;
}

// Function to calculate the area of a square
float areaOfSquare(float side) {
    return side * side;
}

// Function to calculate the area of a circle
float areaOfCircle(float radius) {
    return 3.14 * (radius * radius);  // Using M_PI for better precision
}

// Function to calculate the area of a rectangle
float areaOfRectangle(float h, float w) {
    return h * w;
}
