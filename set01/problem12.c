#include<stdio.h>
struct complex{
float real;
float imaginary;
};
typedef struct complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add_complex(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex sum);

int get_n()
{
  int n;
  printf("enter the size of array");
  scanf("%d",&n);
  return n;
}
Complex input_complex()
{
  Complex a;
  printf("enter the real part");
  scanf("%f", &a.real);
  printf("enter the imaginary part");
  scanf("%f", &a.imaginary);
  return a;
}
void input_n_complex(int n, Complex c[n])
{
  for(int i=0; i<n;i++)
  {
    c[i]=input_complex();
  }
}

Complex add_complex(Complex a, Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}

Complex add_n_complex(int n, Complex c[n])
{
  Complex sum={0,0};
  for(int i=0; i<n;i++)
  {
    sum=add_complex(sum, c[i]);
  }
  return sum;
}
   
void output(int n , Complex c[n], Complex sum)
{
  for(int i=0;i<n;i++)
    {
      printf("the sum of %f+%fi",(int)c[i].real,(int)c[i].imaginary);
      }
  printf("is %f+%fi",(int)sum.real,(int)sum.imaginary);
}
int main()
{
  int n;
  Complex sum={0,0};
  n=get_n();
  Complex c[n];
  input_n_complex(n,c);
  sum=add_n_complex(n,c);
  output(n,c,sum);
}
     
																									