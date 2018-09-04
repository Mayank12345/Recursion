#include<stdio.h>

void main()
{
	int a[5]={1,2,3,4,5};
	int size =5;
	void fun(int a[] ,int size);
	fun(a,size);
//	return 0;
}
void fun(int a[],int size)
{	
//	static int n=size;
	//printf("this is size %d\n",size);
	if(size==0)
		return;
	
	printf("%d\n",a[size-1]);
	fun(a,size-1);
	printf("\n%d",a[size-1]);
}

