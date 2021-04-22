#include<stdio.h>
#include<string.h>
#define SIZE 100
int stack[SIZE];
char post[SIZE];
int top = -1;
void push(int);
int pop();
int main()
{
	char post[SIZE];
	int l,num,i,a,b,c;
	printf("enter the expression");
	gets(post);
	l = strlen(post);
	printf("%d \n",l);
	for(i=0;i<l;i++)
	{
		if(post[i]>'0'&& post[i]<'9')
		{
			num = post[8]-48;
			push(num);
		}
		else
		{
		 int a = pop();
		 int b = pop();
		 switch(post[i])
		{
			case '+' : c=b+a; break;
			case '-' : c=b-a; break;
			case '*' : c=b*a; break;
			case '/' : c=b/a; break;
			case '^' : c=b^a; break;
			deafult : printf("enter valid expression");
		}
	push(c);
	}
	}
printf("the final value is %d",pop());
}
void push(int x)
{
	if (top == SIZE-1)
	{
		printf("stack is full");
	}
	else
	{
		top++;
		stack[top] = x;
		
	}
}
int pop()
{
	if(top == -1)
	{
		printf("stack is empty \n");
		
	}
	else
	{
		return stack[top--];
	}
}
