#include<stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main(){
  float base, height, area;
  input(&base, &height);
  printf("base = %f\n height = %f\n",base, height);
  find_area(base, height, &area);
  output(base, height, area);
  return 0;
}
void input(float *base, float *height){
  printf("Enter the value of the base: ");
  if(scanf("%f",base));
  printf("Enter the value of height: ");
  if(scanf("%f",height));
}
void find_area(float base , float height, float *area){
  *area =(base * height)/2;
}
void output(float base, float height, float area){
  printf("The area of the triangle with base %f and heigth %f is %f\n", base, height,area);
}
