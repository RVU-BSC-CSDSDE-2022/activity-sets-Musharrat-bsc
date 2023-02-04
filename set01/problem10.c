#include<stdio.h>
void input_two_strings(char *string1,char *string2);
int stringcompare(char *string1,char *string2);
void output(char *string1, char *string2, int result);

void input_two_strings(char *string1,char *string2)
{
  printf("enter the first string");
  scanf("%s",string1);
  printf("enter the second string");
  scanf("%s",string2);
}
int stringcompare(char *string1,char *string2)
{
  int i;
  for( i=0;string1[i]!='\0' && string1[i]==string2[i];i++)
  if(string1[i]==string2[i])
  return 0;
  if(string1[i]>string2[i])
  return 1;
  else return -1;
}

void output(char *string1, char *string2, int result)
{
  if(result==0)
  printf("%s is equal to %s",string1,string2);
  else if(result==1)
  printf("%s is greater than %s",string1,string2);
  else if(result==-1)
  printf("%s is greater than %s",string2,string1);
}

int main()
{
  char string1[100], string2[100];
  int result=0;
  input_two_strings(string1,string2);
  result=stringcompare(string1,string2);
  output(string1,string2,result);
  return 0;
}

