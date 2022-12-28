
// Calculate rectangle area and perimeter

#include <stdio.h>
int main(int argc, char const *argv[])
{
    double length,width,perimeter,area;
    printf("Enter the length and width of rectangle :");
    scanf("%lf%lf",&length,&width);
    area = length * width;
    perimeter = 2*(length + width);
    printf("Area of rectangle is %lf\n",area);
    printf("Perimeter of rectangle is %lf",perimeter);
    return 0;
}
