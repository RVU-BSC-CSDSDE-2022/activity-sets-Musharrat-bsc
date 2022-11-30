#include <stdio.h>
int main(void)
{
  int a,b,sum;
  printf("enter the first number\n");
  scanf("%d",&a);
  printf("enter the second number\n");
  scanf("%d",&b);
  sum=sum_func(a,b);
  printf("the sum of the 2 number is %d",sum);
}
sum_func(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}