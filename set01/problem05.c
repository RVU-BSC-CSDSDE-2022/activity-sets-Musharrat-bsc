#include<stdio.h>
int input();
int compare(int a,int b,int c);
void output(int a,int b,int c,int largest);

int input()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  return n;
}

int compare(int a,int b,int c)
{
  int largest=a;
  if (b > largest)
  {
    largest=b;
  }
  if (c > largest)
  {
    largest=c;
  }
  return largest;
}
void output(int a,int b,int c,int largest)
{
  printf("the larger no of %d,%d and %d is %d\n",a,b,c,largest);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=compare(a,b,c);
  output(a,b,c,largest);
  return 0;
}