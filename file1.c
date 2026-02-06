#include <stdio.h>

#define zero 0

int i= zero;
int k= zero;
int b_num = zero;
int s_num = zero;

int main(void)
{
	scanf("%d %d",&i, &k);

	if(i>=k){
		b_num = i;
		s_num = k;
	}
	else{
		b_num = k;
		s_num = i;
	}

	printf("합계: %d\n", s_add(b_num,s_num));
	printf("차이: %d\n", s_sub(b_num,s_num));
	printf("곱: %d\n", s_mul(b_num,s_num));
	printf("나누기: %d\n", s_div(b_num,s_num));
	printf("몫: %d\n", s_quo(b_num,s_num));
	printf("나머지: %d\n", s_remain(b_num,s_num));
	return 0;
}

//합계
int s_add(int a, int b)
{
	int c;
	c=a+b;
	return c;
}
//차이
int s_sub(int a, int b)
{
	int c;
	c=a-b;
	return c;  
}
//곱
int s_mul(int a, int b)
{
	int c;
	c=a*b;
	return c;
}
//나누기
float s_div(int a, int b)
{
	float c;
	c=a/b;
	return c;
}
//몫
int s_quo(int a, int b)
{
	int c;
	c=a%b;
	return c;
}
//나머지
float s_remain(int a, int b)
{
	int c;
	c=a/b-a%b;
	return c;
}

