#include<stdio.h>

void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
  float base,height,area;
  input (base, height);
  find_area(base,height,*area);
  output(base,height,area);
  return 0;
}

void input(float base, float height){
  float n;
  printf("Enter base and height:");
  scanf("%f",&n);
}

void find_area(float base , float height, float *area){
}

void output(float base, float height, float *area){
  area=(1/2)*base*height;
  printf("The area of the traingle with base %f and height %f is %f",base,height,area);
}