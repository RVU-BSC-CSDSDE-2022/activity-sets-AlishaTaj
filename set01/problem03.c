#include <stdio.h>

int input();
int add (int a, int b, int sum);
void output(int a, int b, int sum);
int input()
{
  int n;
  printf("Enter the number:");
  scanf("%d", &n);
  return n;
  }
int add (int a, int b)
{
  return (a+b);
  }
void output(int a, int b, int sum)
{
  printf("the sum of %d and %d the num er %d",a,b,sum);
  }
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  printf("the sum of the number %d\n",sum);
  return(a,b);
}