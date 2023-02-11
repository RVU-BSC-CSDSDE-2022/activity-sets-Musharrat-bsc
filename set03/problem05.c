#include<stdio.h>
int input_array_size();
void init_array(int n,int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n,int a[n]);

int input_array_size()
{
  int n;
  printf("enter the no till where you want to find the prime numbers");
  scanf("%d",&n);
  return n;
}

void init_array(int n, int a[n])
{
  for (int i=0;i<=n-2;i++)
  {
    a[i]=i+2;
  }
}
void erotosthenes_sieve(int n, int a[n])
{
  int i,j;
  for (i=0;a[i]*a[i]<n;i++)
  {
    for( j=i+2;j<n-1;j++)
    {
      if ((a[j]%a[i]==0)&&(a[i]!=1))
      {
          a[j]=1;
      }
    }
  }
}
  													void output(int n, int a[n])
{
  printf("all the prime nos between 2 and %d are [ ",n);
  for(int i=0;i<=n-2;i++)
  {
    if (a[i]!=1)
    {
      printf("%d",a[i]);
    }
  }
  printf("]");
}
int main()
{
  int size;
  size=input_array_size();
  int array[size];
  init_array(size, array);
  erotosthenes_sieves(size,array);
  output(size,array);
  return 0;
}

