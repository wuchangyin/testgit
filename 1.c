#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a,int *b)
{
	int c=0;
	c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int c =1;
	printf("第二次错误的！");
	printf("第三次错误的！");
	char *str = malloc(4*50); 
	int a = 3,b = 4;
	printf("a = %d,b = %d\n",a,b);
	swap(&a,&b);
	for (int a = 1;  a < 10; ++ a)
	{
		printf("a = %d\n",a);
	}
	printf("hello world!\n");
	printf("a = %d,b = %d\n",a,b);
	free(str);
}