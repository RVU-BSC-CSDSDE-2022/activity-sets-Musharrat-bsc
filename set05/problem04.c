#include<stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

void input_camel_details(float *radius, float *height, float *length)
{
  printf("enter stomach radius of camel");
  scanf("%f",radius);
  printf("enter height of the camel");
  scanf("%f",height);
  printf("enter length of the camel");
  scanf("%f",length);
}

int find_mood(float radius, float height, float length)
{
  if ((radius<height) && (radius<length))
  {
    return -1;
  }
  else if ((height<length) && (height<radius))
  {
    return 0;
  }
  else if((length<height) && (length<radius))
  {
    return 1;
  }
  else
  {
    return 2;
  }
}

void output(float radius, float height, float length, int mood)
{
  if (mood==-1)
  {
    printf("the camel is sick");
  }
  else if (mood==0)
  {
    printf("the camel is happy");
  }
  else if(mood==1)
  {
    printf("the camel is tense");
  }
  else
  {
    printf("the camel is just fine");
  }
}

int main()
{
  float radius,height,length;
  int mood;
  input_camel_details(&radius,&height,&length);
  mood=find_mood(radius,height,length);
  output(radius,height,length,mood);
  return 0;
}
