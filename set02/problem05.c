#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int input()
{
  int n;
  printf("enter the no");
  scanf("%d",&n);
  return n;
}
int find_gcd(int a, int b)
{
  int gcd,i;
  //min=(a<b)?a:b;
  for(i=1;i<a||i<b;i++)
  {
    if(a%i==0 && b%i==0)
    {
      gcd=i;
    }
  }
}
void output(int a, int b, int gcd)
{
  printf("the hcf of %d and %d is %d",a,b,gcd);
}
int main()
{
  int a,b,gcd;
  a=input();
  b=input();
  gcd=find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}
