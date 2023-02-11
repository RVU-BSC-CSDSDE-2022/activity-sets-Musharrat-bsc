#include<stdio.h>
#include<string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

void input_string(char *a, char *b)
{
  printf("enter the main string");
  scanf("%s",a);
  printf("enter the string whose index you want to find");
  scanf("%s",b);
}

int sub_str_index(char* string, char* substring)
{
  int index=-1;
  int i,j;
  for (i=0;string[i]!='\0';i++)
  {
    if((string[i]==substring[0]))
    {
      index=i;
      for(j=i;j<=i+strlen(substring)-1;j++)
      {
        if(string[j]!=substring[j-i])
       {
        index = -1;
       }
     }
    if (index!=-1)
    {
      break;
    }
   }
  }
  return index;
}
void output(char *string, char *substring, int index)
{
  if (index==-1)
  {
    printf("entered sub-string '%s' not found in the main string'%s'",substring,string);
  }
  else
  {
    printf("the index of '%s' in '%s' is %d",substring,string,index);
  }
}

int main()
{
  int index;
  char string[100],substring[100];
  input_string(string,substring);
  index= sub_str_index(string,substring);
  output(string,substring,index);
  return 0;
}
