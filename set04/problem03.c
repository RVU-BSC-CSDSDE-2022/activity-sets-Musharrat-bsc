#include<stdio.h>
void input_n_and_r(int *n, int *r);
int fact(int n);
int nCr(int n, int r);
void output(int n, int r, int result);

void input_n_and_r(int *n,int *r)
{
  printf("enter the value of n");
  scanf("%d",n);
  printf("enter the value of r");
  scanf("%d",r);
}

int nCr(int n,int r)
{
  int ncr;
  int n_r=(n-r);
  n=fact(n);
  n_r=fact(n_r);
  r=fact(r);
  int num =n;
  int den=(n_r)*r;
  ncr=(num/den);
  return ncr;
}

int fact(int n)
{
  int fact=1;
  while(n!=0)
  {
    fact=fact*n;
    n=n-1;
  }
  return fact;
}

void output(int n , int r, int result)
{
  printf("for n=%d and r=%d, nCr =%d",n,r,result);
}
int main()
{
  int n,r,ncr;
  input_n_and_r(&n,&r);
  ncr=nCr(n,r);
  output(n,r,ncr);
  return 0;
}
