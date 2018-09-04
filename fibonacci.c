#include<stdio.h>

void main()
{
	int size =10;
	int fun(int size);
	fun(size);
}
int fun(int size)
{	
	static int a=0,b=1;
	int temp=0;
	if(size<=b)
		return 0;
	printf("%d ",b);
	temp=a+b;
	a=b;
	b=temp;
	return fun(size);
}

