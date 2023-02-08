#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

Triangle input_triangle()
{
  Triangle t;
  printf("enter the base of the triangle");
  scanf("%f",&t.base);
  printf("enter the altitude of the triangle");
  scanf("%f",&t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=((t->base)*t->altitude)*0.5;
}
void output(Triangle t)
{
  printf("the area of the triangle is %f",t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}
