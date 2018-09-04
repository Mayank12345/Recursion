#include<stdio.h>

int main()

{	
	int a=12345,count;
	int fun(int a);
	do{
	a=fun(a);
	}while(a>9);
	printf("%d",a);
	return 0;
}
int fun(int a)
{	
	static int  digit = 0;
	if(a<=0)
		return 0;
	digit =a%10 + fun(a/10);
	return digit;
}
