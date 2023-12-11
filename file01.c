#include<stdio.h>

int sub(int a,int b)
{
	return a - b;
} 
int add(int a,int b)
{
	return a + b;
}

int divi(int a,int b)
{
	if(b==0) return 0;
	else 
	{
		return a/b;
	}
}

int malt(int a,int b)
{
	return a*b;
} 

int main()
{
    printf("hello world\n");
    printf("Why Why Why\n"); 
    printf("%d\n",add(1,1));
    printf("%d\n",sub(2,1));
    printf("%d\n",malt(3,3)); 
    printf("%d",add(1,1));
    return 0;
}
