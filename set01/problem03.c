#include<stdio.h>
int input();
int add(int a, int b);
void main( int a,  int b, int sum);
int input()
{
	int n;
	printf("enter the number:);
	scanf("%d",&n);
	return n;
}
int add( int a , int b)
{
	int sum;
	sum=a+b;
}
void main( int a, int b , int sum)
{
	printf("the addition of number is %d\n",sum);
}
int main()
{
	int a,b,sum;
	a=input();
	b=input();
	add(a,b);
}

