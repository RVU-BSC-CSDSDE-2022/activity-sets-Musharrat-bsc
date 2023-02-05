#include<stdio.h>
int input_side();
int check_scalene(int a,int b,int c);
void output(int a,int b,int c,int isscalene);

int input_side()
{
  int n;
  printf("enter the side");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c)
{
  int isscalene;
  if(a!=b && b!=c)
  {
    printf("triangle is scalene");
  }
  else
  {
    printf("triangle is not scalene");
  }
  return isscalene;
}

void output(int a,int b,int c,int isscalene)
{
  printf("the given of %d %d and %d is %d",a,b,c,isscalene);
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}     
																																					