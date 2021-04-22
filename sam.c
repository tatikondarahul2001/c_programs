#include<stdio.h>
int main()
{
	int item,i,n,a[10];
	printf("enter the no of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to be searched:");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			printf("%d item found at %d location",item,i);
		}
	}
	return 0;
}
