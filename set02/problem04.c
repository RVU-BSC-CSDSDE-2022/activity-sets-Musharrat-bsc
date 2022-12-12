#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main(){
  int n, a[n], sum;
  n = input_array_size();
  input_array(n, &a[n]);
  sum = sum_composite_numbers(n, &a[n]);
  output(sum);
}
int input_array_size(){
  int n;
  printf("enter the size of the array: ");
    if(scanf("%d", &n));
  return n;
  }
void input_array(int n, int a[n]){
  int i;
  printf("Enter the elements for the array: ");
  for(i=0; i<n;i++){
    if(scanf("%d", &a[i]));
  }
}
int sum_composite_numbers(int n, int a[n])
{
  int i,isprime=0,sum=0;
  for(i=1;i<n;i++)
  {
    for(int counter = 2; counter<= a[i]/2; counter++){
      if((a[i]%counter) == 0){
        isprime=1;}
      }
    if(isprime==1){
      sum = sum+a[i];
      }
    }
  return sum;
  }
void output(int sum){
  printf("sum is %d: \n",sum);
}
