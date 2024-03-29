#include<stdio.h>
#include<string.h>
void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

void input_string(char *a)
{
  printf("enter the string");
  scanf("%[^\n]s",a);
}

int count_words(char *string)
{
  char copy[100];
  int i;
  for(i=0;string[i]!='\0';i++)
  {
    copy[i]=string[i];
  }
  copy[i]='\0';
  int count=0;
  char *token;
  token=strtok(copy," ");
  while (token!=NULL)
  {
    count+=1;
    token=strtok(NULL," ");
  }
  return count;
}

void output(char *string, int no_words)
{
  printf("the number of words in ' ");
  char *tok;
  tok=strtok(string," ");
  while(tok!=NULL)
  {
    printf("%s",tok);
    tok=strtok(NULL," ");
  }
  printf("'is %d",no_words);
}
int main()
{
  char string[100];
  input_string(string);
  int number_of_words;
  number_of_words=count_words(string);
  output(string,number_of_words);
  return 0;
}
