#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n,int sum);

int input_n()
{
  int n;
  printf("enter the no");
  scanf("%d",&n);
  return n;
}
int sum_n_nos(int n)
{
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    sum=sum+i;
   }
   return sum;
}
void output(int n,int sum)
{
  printf("the sum of %d is %d",n,sum);
}
int main()
{
  int n,sum=0;
  n=input_n();
  sum=sum_n_nos(n);
  output(n,sum);
  return 0;
}
