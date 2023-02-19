#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
Fraction find_smallest_fraction(Fraction f1, Fraction f2, Fraction f3);
void output(Fraction f1, Fraction f2, Fraction f3,Fraction smallest);


int main()
{
  Fraction f1,f2,f3,smallest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  smallest=find_smallest_fraction(f1,f2,f3);
  output(f1,f2,f3,smallest);
  return 0;
}

Fraction input_fraction()
{
  Fraction f;
  printf("Enter the numerator\n");
  scanf("%d", &f.num);
  printf("Enter the denominator\n");
  scanf("%d", &f.den);
  return f;
}



Fraction find_smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
    Fraction org1,org2,org3;
    org1=f1,org2=f2, org3=f3;
    f1.den=f2.den=f3.den=f1.den*f2.den*f3.den;
    f1.num=(f1.num)*(f1.den/org1.den);
    f2.num=(f2.num)*(f2.den/org2.den);
    f3.num=(f3.num)*(f3.den/org3.den);
    if(f1.num<=f2.num&&f1.num<=f3.num)
      return org1;
    if(f2.num<=f1.num&&f2.num<=f3.num)
      return org2;
    return org3;
}

void output(Fraction f1, Fraction f2,Fraction f3,  Fraction smallest)
{
  printf("The smallest of %d/%d and %d/%d and %d/%d is %d/%d", f1.num,f1.den,f2.num,f2.den, f3.num, f3.den,smallest.num, smallest.den);
}