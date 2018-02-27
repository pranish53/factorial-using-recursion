#include<stdio.h>
#include<conio.h>
int sum(int n,int mul);
int main()
{
	int n,mul=1;
	printf("enter the number: ");
	scanf("%d",&n);
	sum(n,mul);
}
int sum(int n,int mul)
{
	mul=mul*n;
	n-=1;
	if(n>0)
	{
		sum(n,mul);
	}
	if(n==0)
	printf("factorial=%d",mul);
	if(n<0)
    printf("factorial=1");
}

