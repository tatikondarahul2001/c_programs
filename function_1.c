#include<stdio.h>
#include<conio.h>
int sum(int a, int b)
{
	return a+b;
}
int main()
{
	int a,b;
	printf("enter the values of two number : ");
	scanf("%d%d",&a,&b);
	printf("the sum of two numbers is : %d",sum(a,b));
}
