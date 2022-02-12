// Program to enter Radius of circle and print its diameter, circumference and area

#include <stdio.h>

int main(){
    double radius, diameter, circumference, area;
    printf("Enter Radius of the circle:\n");
    scanf("%lf", &radius);
    diameter = 2*radius;
    circumference = 2*3.14*radius;
    area = 3.14*radius*radius;
    printf("Diameter of the circle is %lf\n", diameter);
    printf("Circumferernce of the circle is %lf\n", circumference);
    printf("Area of the circle is %lf\n", area);
    return 0;
}