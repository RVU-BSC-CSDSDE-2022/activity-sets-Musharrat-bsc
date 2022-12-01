#include<stdio.h>
int main()
{
  int a, b ,c;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a,&b,&c);
  
  int number=compare(a,b,c);
}
int compare(int a, int b, int c){
  if(a>b && a>c){
    printf("a is the largest.");
  }
  else if(b>a && b>c){
    printf("b is the largest.");
  }
  else if(c>a && c>b){
    printf("c is the largest.");
 }
}