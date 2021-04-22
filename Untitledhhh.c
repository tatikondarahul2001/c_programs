#include<stdio.h>
#include<string.h>
int main()
{
	int x,y,len,a,b;
	char s1[100],s2[100],s3[100];
	printf("enter a string s1 : \n");
	scanf("%s",s1);
	printf("enter a string s2 : \n");
	scanf("%s",s2);
	len = strlen(s1);
	printf("the length of the string is %d \n : ",len);
	x = strcpy(s3,s1);
	printf("the copied string is %s \n :",x);
	y = strcat(s1,s2);
	printf("the contactination string is %s\n :",y);
	a = strcmp(s1,s2);
	printf("the string comparision is %d\n :",a);
	b = strrev(s1);
	printf("the reverse of the string is %s\n",b);
		
}
