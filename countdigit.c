#include<stdio.h>

int main()

{	
	int a=7778,count=0;
	int fun(int a);
	count=fun(a);
	printf("%d\n",count);
	return 0;
}
int fun(int a)
{
	static int count =0;
	if(a<=0)
		return 0;
	count++;
	fun(a/10);
	return count;
	
}
