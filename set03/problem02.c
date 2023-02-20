#include<stdio.h>
#include<math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter (x1,y1)");
  scanf("%f%f",x1,y1);
  printf("enter (x2,y2)");
  scanf("%f%f",x2,y2);
  printf("enter (x3,y3)");
  scanf("%f%f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float d1,d2,d3;
  d1=sqrt((pow(y2-y1),2)+(pow(x2-x1),2));
  d2=sqrt((pow(y3-y2),2)+(pow(x3-x2),2));
  d3=sqrt((pow(y3-y1),2)+(pow(x3-x1),2));
  if(d1==0)||(d2==0)||(d3==0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  if(result==1)
  {
    printf("the points (%.1f,%.1f) , (%.1f,%.1f) and (%.1f , %.1f) do not form a triangle",x1,y1,x2,y2,x3,y3);
  }
  else
  {
    printf("the points (%.1f,%.1f) , (%.1f,%.1f) and (%.1f ,%.1f) forms a triangle",x1,y1,x2,y2,x3,y3);
  }
}
int main()
{
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  int result;
  result=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
  return 0;
}
