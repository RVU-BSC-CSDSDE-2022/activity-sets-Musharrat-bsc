#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int input_array_size()
{
  int n;
  printf("enter the size of the array");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
  for( int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_composite_numbers(int n, int a[n])
{
  int i,result=0,var,sum=0,j;
  for(i=0;i<n;i++)
  {
    for(j=1;j<=a[i];j++)
    {
       if((a[i]%j)==0)
       {
          var++;
        }
    }
   if(var>2)
   {
     sum=sum+a[i];
    }
    }
    return sum;
}
void output(int sum)
{
  printf("the sum of the composite no is %d",sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(sum);
}

