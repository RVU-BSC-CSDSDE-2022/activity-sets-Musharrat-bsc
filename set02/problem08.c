#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int input_n()
{
  int n;
  printf("enter no of triangle");
  if(scanf("%d",&n));
  return n;
}

Triangle input_triangle()
{
  Triangle t;
  printf("enter the base and altitude");
  if(scanf("%f%f",&t.base,&t.altitude));
  return t;
}
void input_n_triangles(int n, Triangle t[n])
{
  for (int i=0;i<n;i++)
  {
    t[i]=input_triangle();
  }
}
void find_area(Triangle *t)
{
  t->area=((t->base)*(t->altitude))/2;
}
void find_n_areas(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
  {
    find_area(&t[i]);
  }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle smallest;
  smallest.area=t[1].area;
  for(int i=0;i<n;i++)
  {
    if(t[i].area <= smallest.area)
    {
      smallest.area=t[i].area;
    }
  }
  return smallest;
}

void output(int n, Triangle t[n], Triangle smallest)
{
  printf("the smallest triangle out of triangles with base and height");
  for(int i=0;i<n;i++)
  {
    printf("(%d%d)",(int)t[i].base,(int)t[i].altitude);
  }
  printf("is the triangle having base %d,height %d and area %d",(int)t->base,(int)t->altitude,(int)smallest.area);
}
int main()
{
  int n=input_n;
  Triangle t[n];
  input_n_triangles(n,t);
  find_n_areas(n,t);
  Triangle smallest =find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}
