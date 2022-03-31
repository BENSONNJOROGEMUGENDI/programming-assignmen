//program to find area of a circle
#include<stdio.h>
#include<math.h>
int main()
{
int r;
float pi=3.142,area;
    printf("enter the value of the radius of the circle/");
   
    scanf("%d",&r);
  area=pi*r*r;
    printf("Area of circle=%f",area);
    return 0;
}