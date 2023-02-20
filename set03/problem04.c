#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);


int main()
{
  int n, fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
}


int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d", &n);
  return n;
}

int find_fibo(int n)
{
 
  int first_term=0, second_term=1, next_term=0;
  for(int i=2;i<=n;i++)
  {
      next_term=first_term+second_term;
      first_term=second_term;
      second_term=next_term;
  }
  return next_term;
}

void output(int n, int fibo)
{
  printf("fibo(%d)=%d",n, fibo);
}