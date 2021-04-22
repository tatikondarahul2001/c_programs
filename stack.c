#include<stdio.h>
#define size 10
void push(int);
void pop();
void display();
int stack[size],top=-1;
void main()
{
int value,choice;
while(1)
{
printf("stack operations are as follows\n");
printf("1.push\n 2.pop\n 3.display");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the value\n");
        scanf("%d",&value);
         push(value);
       break;
case 2:pop();
       break;
case 3:display();
        break;
case 4:exit(1);
default:printf("wrong selection\n");        
}
}
}
   void push(int value)
   {
    if(top==size-1)
    {
    printf("stack is full\n");
  }
  else
  {
  top++;
  stack[top]=value;
  printf("insertion completed\n");
  }
   }
   
    void pop()
    {
    if(top==-1)
    {
    printf("stack is empty\n");
}
else
{
printf("deleted:%d",stack[top]);
top--;
}
}
void display()
{
if(top==-1)
{
printf("stack is empty\n");
}
else
{
int i;
printf("stack elemnts are\n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
}
