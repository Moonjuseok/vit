#include <stdio.h>
#include <math.h>

#define zero 0

int i= zero;
int k= zero;
int b_num = zero;
int s_num = zero;

//Input two numbers and perform artihmetic operations. 
int main(void)
{
	scanf("%d %d",&i, &k);

	if(i>=k)
	{
		b_num = i;
		s_num = k;
	}
	else
	{
		b_num = k;
		s_num = i;
	}

	printf("%d + %d = %d\n", b_num, s_num, s_add(b_num,s_num));
	printf("%d - %d = %d\n", b-num, s_num, s_sub(b_num,s_num));
	printf("%d x %d = %d\n", b_num, s_num, s_mul(b_num,s_num));
	printf("%d / %d = %.2f\n", b_num, s_num, s_div(b_num,s_num));
	printf("%d % %d = %d\n", b_num. s_num, s_quo(b_num,s_num));
	printf("%d %% %d = %d\n", b_num, s_num, s_remain(b_num,s_num));

	return 0;
}

//addition 
int s_add(int a, int b)
{
	int c;
	c=a+b;
	return c;
}
//subtract
int s_sub(int a, int b)
{
	int c;
	c=a-b;
	return c;  
}
//multiplication
int s_mul(int a, int b)
{
	int c;
	c=a*b;
	return c;
}
//division
int s_div(int a, int b)
{
	double c;
	c=a/b;
	return c;
}
//quotient
int s_quo(int a, int b)
{
	int c;
	c=a%b;
	return c;
}
//remainder
int s_remain(int a, int b)
{
	int c;
	c=fmod(a,b);
	return c;
}
