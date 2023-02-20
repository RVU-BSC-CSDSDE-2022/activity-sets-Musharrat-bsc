#include<stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

 int input_n()	
{
  int n;
  printf("enter the size of array");
  scanf("%d",&n);
  return n;
}

void input(int n, int a[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("enter no %d of array",i+1);
    scanf("%d",&a[i]);
  }
}

float odd_average(int n, int a[n])
{
  int i, sum=0, count=0;
  for(i=0; i<n;i++);
  {
    if(a[i]%2!=0)
    {
      sum=sum+a[i];
      count+=1;
    }
  }
  return sum/count;
}

void output(float avg)
{
  printf("the average of the odd elements in the array is %.2f",avg);
}

int main()
{
  int n;
  float avg;
  n=input_n();
  int a[n];
  input(n,a);
  avg=odd_average(n,a);
  output(avg);
  return 0;
}

