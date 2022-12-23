#include <stdio.h>
#define pi 3.14159
float AreaOfCircle(int r)//radius
{
    return pi*r*r;
}
int main()
{
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d",&radius);

    printf("Area of circle of radius %d is %f\n",radius,AreaOfCircle(radius));
    return 0;
}