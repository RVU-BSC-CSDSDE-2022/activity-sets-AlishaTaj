#include<stdio.h>
int input();
void add (int a, int b, int *sum);
void add(int a , int b, int sum);
int input()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	return n;
}
void add(int a , int b , int *sum)
{
*sum=a+b;
}
void output(int a, int b ,int sum)
{
printf("sum of %d and %d is%d\n",a,b,sum);
}
int main()
{
int a,b,sum;
a=input();
b=input();
add(a,b,&sum);
}