#include<stdio.h>

int main()
{
	int no=123;
	int r1,r2,r3,q1,q2;
	
	r1=no%10;//3
	q1=no/10;//12
	r2=q1%10;//2
	q2=q1/10;//1;
	r3=q2;
	
	printf(" %d %d %d ",r1,r2,r3);
	
	int rev=r1*100+r2*10+r3;
	
	printf(" %d",rev);
	
	
}