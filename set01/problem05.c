#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main(){
  int a, b, c, largest;
  printf("Enter three no's : ");
  a = input();
  b = input();
  c = input();
  largest = compare(a, b, c);
  output(a, b, c, largest);
}
int input(){
  int a;
  scanf("%d", &a);
  return a;
}
int compare(int a, int b, int c){
  if (a > b && a > c){
   return a;
  }
  else if (b > a && b > c){
    return b;
  }
  else if (c > a && c > b){
    return c;
  }
  else {
    printf("invalid input");
  }
}
void output(int a, int b, int c, int largest){
  if (largest == a){
    printf("The largest of %d, %d and %d is %d\n", a, b, c, largest);
  }
  else if(largest == b){
    printf("The largest of %d, %d and %d is %d\n", a, b, c, largest);
  }
  else if (largest == c){
    printf("The largest of %d, %d and %d is %d\n", a, b, c, largest);
  }
  else{
    printf("sorry, wrong input try again.\n");
  }
}
