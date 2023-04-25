#include<stdio.h>
void main()
{
	void min(int a,int b);
	void max(int c,int d);
	int m,n;
	printf("enter two values to find min and max:\n");
	scanf("%d %d",&m,&n);
	max(m,n);
	min(m,n);
}
void min(int a,int b)
{
	if(a<b)
	{
		printf("\n %d is minimum",a);
	}
	else
	{
		printf("\n %d is minimum",b);
	}
}
void max(int c,int d)
{
	if(c>d)
	{
		printf("\n %d is maximum",c);
	}
	else
	{
		printf("\n %d is maximum",d);
	}
}
