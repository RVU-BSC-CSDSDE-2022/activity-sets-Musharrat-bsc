#include <stdio.h>
void scalene (int side1,int side2,int side3);
int main()
{
  int side1,side2,side3;
  printf("enter the side:");
  scanf("%d%d%d",&side1,&side2,side3);

  scalene(side1,side2,side3);
}
void scalene(int side1,int side2,int side3){
  if (side1==side2 || side2==side3 || side3==side1){
    printf("The given triangle is not scalene :(");
    }
  else{
    printf("The given triangle is  scalen :)");
}
}