#include <stdio.h>

#define PI 3.14159

float circleArea(float radius) 
{
    return PI * radius * radius;
}

float rectangleArea(float length, float width) 
{
    return length * width;
}

float triangleArea(float base, float height) 
{
    return 0.5 * base * height;
}

int main() 
{
    float radius, length, width, base, height;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
        
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    
    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    
    float circle_area = circleArea(radius);
    float rectangle_area = rectangleArea(length, width);
    float triangle_area = triangleArea(base, height);
    
    printf("Area of the circle: %.2f\n", circle_area);
    printf("Area of the rectangle: %.2f\n", rectangle_area);
    printf("Area of the triangle: %.2f\n", triangle_area);

    return 0;
}

