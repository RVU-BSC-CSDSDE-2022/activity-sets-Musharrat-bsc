#include<stdio.h>
#include<math.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

float input()
{
  float n;
  printf("enter the number");
  scanf("%f",&n);
  return n;
}
float square_root(float n)
{
  float i=4;
  while(fabs(i*i-n)/2 >0.0001)
    {
      i=(i+n/i)/2;
    }
  return i;
}
void output(float n, float sqrroot)
{
  printf("square root of %.2f=%.2f",n,sqrroot);
}
int main()
{
  float n,sqrroot;
  n=input();
  sqrroot=square_root(n);
  output(n,sqrroot);
  return 0;
}