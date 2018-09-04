#include<stdio.h>

void main()
{
	int a[5]={1,2,3,4,5};
	int size =5,sum=0;
	int fun(int a[] ,int size);
	sum =fun(a,size);
	printf("%d",sum);
}
int fun(int a[],int size)
{	
	if(size==0)
		return 0;
	return a[size-1]+fun(a,size-1);
}

