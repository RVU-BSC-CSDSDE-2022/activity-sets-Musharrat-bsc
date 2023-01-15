#include<stdio.h>
struct complex
{
float real;
float imaginary;
};
typedef struct complex comp;
comp input_complex();
comp add_complex(comp a, comp b);
void output(comp a,comp b,comp sum);

comp input_complex()
{
  comp n;
  printf("enter the real part and imaginary part:\n");
  scanf("%f%f",&n.real,&n.imaginary);
  return n;
}
comp add_complex(comp a,comp b)
{
  comp add;
  add.real=a.real+b.real;
  add.imaginary=a.imaginary+b.imaginary;
  return add;
}
void output(comp a,comp b,comp sum)
{
  printf("the sum of %f+%fi and %f+%fi is %f+%fi",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}
int main()
{
  comp a,b,sum;
  a=input_complex();
  b=input_complex();
  sum=add_complex(a,b);
  output(a,b,sum);
  return 0;
}
