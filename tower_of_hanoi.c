#include<stdio.h>

void main()

{	
	int n;
	printf("how many disk you want to move: ");
	scanf("%d",&n);
	void fun(int,char,char,char);
	fun(n,'A','C','B');
	//return 0;
}
void fun(int n,char from,char to,char aux)
{ 
	if(n<=1)
	{	printf("your disk is moved from %c to %c\n",from,to);
		return;
	}
	fun(n-1,from,aux,to);
       printf("your is moved from from %c to %c\n",from,to);
       fun (n-1,aux,to,from);
}
       	       

